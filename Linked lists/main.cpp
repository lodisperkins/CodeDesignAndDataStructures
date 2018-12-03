#include <iostream>
#include "iterator.h"
#include "list.h"
#include "nodetype.h"
#include"unorderedlist.h"
int main()
{
	nodetype<int> num(5);
	nodetype<int> num1(6);
	unorderedList<int> mylist;
	unorderedList<int> mynewnewlist;
	nodetype<int> * ptr = &num;
	iterator<int> iter(ptr);
	// Test for initialize function
	//Expected result: mynewnewlist's count will be set to zero,and its first and last pointers will point to null
	mynewnewlist.initialize();

	// Test for insertfirst/insertlast function
	//Expected result: mynewnewlist wil contain the values 2,1,and 3 in that specific order
	mynewnewlist.insertfirst(1);
	mynewnewlist.insertfirst(2);
	mynewnewlist.insertlast(3);

	// Test for assignment operator overload
	//Expected result: mynewnewlist's values will be overwritten to contain mylist's values and printed to the console
	mylist.initialize();

	mylist.insertfirst(5);
	mylist.insertfirst(4);
	mylist.insertlast(3);
	mylist.insertlast(2);

	mynewnewlist = mylist;
	mynewnewlist.print();
	unorderedList<int> mynewlist(mylist);

	// Test for search function
	//Expected result: Boolean isthere will be set to true if the given value is in the list
	bool isthere = mylist.search(2);
	// Test for print function
	//Expected result: The numbers 4,5,3,2 will be printed to the console in that order
	mylist.print();
	
	// Test for delete function
	//Expected result: The numbers 5,3,2 will be printed to the console in that order
	mylist.deleteNode(4);
	mylist.print();

	// Test for back/front function
	//Expected result: The integer variable test will be given the value of 2, while test2 will be 5
	int test = mylist.back();
	int test2 = mylist.front();

	// Test for begin/end function
	//Expected result: The iterator will first point to 5 and then to 2
	iter = mylist.begin();
	iter = mylist.end();

	// Test for destroy/isEmpty function
	//Expected result: The boolean empty will be set to true
	mylist.destroy();
	bool empty = mylist.isEmpty();
}