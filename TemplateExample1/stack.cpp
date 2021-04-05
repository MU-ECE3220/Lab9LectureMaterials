#include "stack.h"

#ifndef STACK_CPP
#define STACK_CPP

//constructor with the default size 10
template <class T>
Stack<T>::Stack(int s)
{
	size = s > 0 && s < 1000 ? s : 10 ;  
	top = -1 ;  // initialize stack
	stackPtr = new T[size] ; 
}

template <class T>
int Stack<T>::push(const T& item)
{
	if (!isFull())
	{
		stackPtr[++top] = item ;
		return 1 ;  // push successful
	}
	return 0 ;  // push unsuccessful
}

// pop an element off the Stack
template <class T> 
int Stack<T>::pop(T& popValue) 
{
	if (!isEmpty())
	{
		popValue = stackPtr[top--] ;
		return 1 ;  // pop successful
	}
	return 0 ;  // pop unsuccessful
}

#endif