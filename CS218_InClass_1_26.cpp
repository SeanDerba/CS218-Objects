// CS218_InClass_1_26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "list.h"
using namespace std;

int main()
{
	UnSortedList myList = UnSortedList();

	myList.Additem(4);
	myList.Additem(10);
	myList.Additem(5);

	myList.DeleteItem(10);

	for (int i = 0; i < myList.GetLength(); i++) {
		cout << endl;
	}
}
