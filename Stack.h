//Data structure that operates on a first in first out basis, uses NodeType to allow dynamic size
#pragma once
typedef int ItemType;

struct NodeType
{
	ItemType info;
	NodeType* next;
};

class Stack
{
public: // 7 public member functions
	Stack();
	bool IsFull() const;
	bool IsEmpty() const;
	void Push(ItemType item);
	void Pop();
	ItemType Top() const;
	unsigned int LengthIs() const;
	void PrintStack();
private:
	NodeType* top; //index of the top item on the stack
	int length;
};


typedef NodeType* Nptr;
