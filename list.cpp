//#include "list.h"
//#include "iostream"
//
//
//UnSortedList::UnSortedList() {
//	length = 0;
//}
//UnSortedList::~UnSortedList() {
//
//}
//
//int UnSortedList::GetLength() {
//	return length;
//}
//bool UnSortedList::isEmpty() {
//	return length == 0;
//}
//bool UnSortedList::isFull() {
//	NodeType* ptr = new NodeType;
//	if (ptr == NULL) {
//		return true;
//	}
//	delete ptr;
//	return false;
//}
//void UnSortedList::Additem(ItemType item) {
//	Nptr p = new NodeType;
//	p->info = item;
//	if (isEmpty()) {	//If list is empty
//		//list = p;
//	}
//	else {				//List has elements, add to beginning
//		//p->next = list;
//		//list = p;
//	}
//	length++;
//}
//void UnSortedList::DeleteItem(ItemType item) {
//	////Nptr p = list;
//	////Nptr prev = list;
//	//while (p != NULL) {
//	//	if (list->info == item) {	//Item is first
//	//	//	list->p.next;
//	//		delete p;
//	//		break;
//	//	}
//	//	else if (p->info == item) {	//Item is last
//	//		if (p->next == NULL) {
//	//			prev->next = NULL;
//	//			delete p;
//	//			break;
//	//		}
//	//		else {	//Item is in middle
//	//			prev->next = p->next;
//	//			delete p;
//	//			break;
//	//		}
//	//	}
//	//	prev = p;
//	//	p = p->next;
//	//}
//	////length--;
//}
//bool UnSortedList::FindItem(ItemType target) {
//	Nptr p = list;
//	while (p != NULL) {
//		if (p->info == target) {
//			return true;
//		}
//		p = p->next;
//	}
//}
//
//void UnSortedList::MakeEmpty() {
//	while (list != NULL) {
//		Nptr p = list;
//		list = list->next;
//		delete p;
//	}
//	length = 0;
//	current = list;
//}
//
//void UnSortedList::ResetList() {
//
//}
//ItemType UnSortedList::GetNextItem() {
//
//}