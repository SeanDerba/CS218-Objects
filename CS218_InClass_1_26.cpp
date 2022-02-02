// CS218_InClass_1_26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "list.h"
#include "Stack.h"
using namespace std;

int main()
{
	Stack myStack = Stack();
	myStack.Push(10);
	myStack.Push(21);
	myStack.Push(99);

	myStack.PrintStack();

	myStack.Pop();
	
	myStack.PrintStack();

	
}
