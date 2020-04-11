#include<iostream>
#include "Stack.h"
#include<experimental/random>

int main()
{
	Stack<int> s;
	s.PrintVector();

	s.Push(10);
	s.Push(20);
	s.Pop();
	s.Push(30);
	s.Push(40);
	s.Pop();

	s.PrintVector();

	auto operationOnStack = 1000;
	int elem = 0;

	// Randomly performing stack operations 1000 times.
	for(auto  i = 0;i < operationOnStack;i++)
	{
		// 1: Push
		// 2: Pop
		// 3: ElemAtTop
		// 4: StackSize
		// 5: PrintVector
		int operationToPerformed = std::experimental::randint(1,5);
		switch(operationToPerformed)
		{
			case 1 : 
				elem = std::experimental::randint(1, 5000);
				std::cout<<" The element to be pushed is : "<< elem <<std::endl;
				s.Push(elem);
				break;

			case 2 : 
				 elem = s.Pop();
				std::cout<<" The element popped is : "<< elem <<std::endl;				
				break;
			
			case 3 : 
				 elem = s.ElemAtTop();
				std::cout<<" The element at the top of stack is : "<< elem <<std::endl;				
				break;

			case 4 : 
				 elem = s.StackSize();
				std::cout<<" The size of stack is : "<< elem <<std::endl;				
				break;

			case 5 : 
				std::cout<<" Printing current stack " <<std::endl;
				s.PrintVector();
				break;

			default:
				break;

		}


	}
	return 0;
}
