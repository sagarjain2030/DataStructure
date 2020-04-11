#include<vector>

template <class X>
class Stack
{
private:
	std::vector<X> v;
	int top;

public:
	Stack();
	~Stack();

	void Push(X elem);
	X Pop();
	bool IsEmpty();
	int StackSize();
	X ElemAtTop();
	void PrintVector();
};

template<class X>
Stack<X>::Stack()
{
	top = -1;
}

template <class X>
Stack<X>::~Stack()
{
}

template <class X>
void Stack<X>::Push(X elem)
{
	v.push_back(elem);
	top++;
}

template <class X>
X Stack<X>::Pop()
{
	if(v.size() < 1)
	{
		std::cout<<" Nothing in stack."<<std::endl;
		return -1;
	}
	else
	{
		X elem = v[top--];
		v.pop_back();
		return elem;
	}
}

template <class X>
X Stack<X>::ElemAtTop()
{
	if(v.size() < 1)
	{
		std::cout<<" Top is Empty "<<std::endl;
		return -1;
	}

	X elem = v[top];
	return elem;
}

template <class X>
bool Stack<X>::IsEmpty()
{
	return v.empty()?true:false;
}

template <class X>
int Stack<X>::StackSize()
{
	return v.size();
}

template <class X>
void Stack<X>::PrintVector()
{
	if(v.size() < 1)
		std::cout<<" Nothing in stack."<<std::endl;
	else
	{
		for(auto i:v)
			std::cout<< i << "  ";
		std::cout<<std::endl;
	}
}