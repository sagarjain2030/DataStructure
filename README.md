# DataStructure
This Repository includes my implementations of different data structures and algorithms I learned.
### Index:
- [Sorting](#Sorting)
	- [Insertion Sort](#Insertion-Sort)

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
