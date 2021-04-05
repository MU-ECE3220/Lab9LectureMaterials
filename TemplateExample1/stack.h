#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
private:
	int size; 
	int top;  
	T* stackPtr;

public:
	Stack(int = 10) ; 
	~Stack() { delete [] stackPtr ; }
	int push(const T&); 
	int pop(T&); 
	int isEmpty()const { return top == -1 ; } 
	int isFull() const { return top == size - 1 ; } 
};

#include "stack.cpp"

#endif