#pragma once
typedef ItemType;

struct NodeType {
	ItemType info;
	NodeType* next;
};

typedef NodeType* Nptr;

class UnSortedList {
private:
	ItemType *list;
	int length;
	NodeType* current;

public:
	UnSortedList();
	~UnSortedList();

	int GetLength();
	bool isEmpty();
	bool isFull();
	void Additem(ItemType);
	void DeleteItem(ItemType);
	bool FindItem(ItemType);
	void MakeEmpty();
	void ResetList();
	ItemType GetNextItem();


};

