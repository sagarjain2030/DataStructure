# DataStructure
This Repository includes my implementations of different data structures and algorithms I learned.
### Index:
- [Abstract Data Types(ADT)](#Abstract-Data-Types)
- [Stack](#Stack)
- [Sorting](#Sorting)
	- [Insertion Sort](#Insertion-Sort)

### Abstract Data Types:
Abstract Data Types (ADT) defines set of instances.These instance are independent of programming languages they are implemented in.They encapsulates Data structure (The way data is stored and accessed) and Algorithms that implement Data Structures.
Types of Operations that can be performed on ADTs are :  
1. Constuction :   
	- New Operation : To create new instance of ADT.
2. Access Function : 
	- Isin operation : To check if element is in ADT.
3. Manipulation Operation : 
	- Insert operation : To Insert new element in ADT.
	- Delete operation : To Delete element from ADT.
	
### Stack:
Stack is considered as simplest form of ADT.It is ___"Last In First Out"___ ADT. It means, one can access only most recently inserted element.To access other elements, one must delete the elements added after that particular element.  
Operations that can be performed on Stack:   
- New() : Creates New Stack.
- Push(elem) : Pushed element elem into stack.
- Pop() : Pop Most recently inserted element from stack.
- Top() : Returns Top Object without deleting it.
- Size() : current size of stack.
- IsEmpty() : Check if stack is empty

### Sorting:
Sort is considered as basic problem in Computer science which helps in Searching.To facilitate sorting, there are number of algorithms invented. Each of these algorithms have their own advantages and disadvantages.

#### Insertion Sort : 
Insertion sort is basically the way humans arrange cards in hand while playing.The strategy is very simple:  
1. Start Empty handed
2. Insert card into right hand position of sorted card.
3. Continue till all cards are inserted/sorted.  

##### PsudoCode
``` PsudoCode
N => number of elements / size of array
A => Array of elements
for i from 1 to N
	key = A[i]
	j = i - 1
	while j >= 0 and A[i] > key
		A[j+1] = A[j]
		j = j - 1
	A[j+1] = key
	next i
```
##### Time Complexity = __O__ (n^2)
The C++ implementation can be found [here][insertionSort_C++]




[insertionSort_C++]: C++/Insertion_Sort.cpp
