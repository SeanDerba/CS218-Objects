#include "Stack.h"
#include "iostream"

Stack::Stack() {
	length = 0;
}
bool Stack::IsFull() const {
	NodeType* ptr = new NodeType;
	if (ptr == NULL) {
		return true;
	}
	delete ptr;
	return false;
}
bool Stack::IsEmpty() const {
	return length == 0;
}
void Stack::Push(ItemType item) {
	Nptr p = new NodeType;
	p->info = item;
	p->next = top;
	top=p;
	length++;
}
void Stack::Pop() {
	Nptr p = top;
	top = p->next;
	delete p;
	length--;
}
ItemType Stack::Top() const {
	return top->info;
}
unsigned int Stack::LengthIs() const {
	return length;
}

void Stack::PrintStack() {
	Nptr p = new NodeType;
	p = top;
	for (int i = 0; i < length; i++) {
		std::cout << p->info << ' ';
		p = p->next;
	}
	std::cout << std::endl;
}
