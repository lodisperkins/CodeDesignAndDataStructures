#include "array.h"
#include <iostream>
int main()
{
	DynamicArray<int> test;
	test.CreateArray(3);
	test.insertlast(4);
	test.insertlast(3);
	test.insertlast(2);
	test.insertlast(1);
	
	for (int i=0; i < 4; i++)
	{
		std::cout << test.getData(i) << std::endl;
	}
	test.sort();
	for (int i = 0; i < 4; i++)
	{
		std::cout << test.getData(i) << std::endl;
	}
	system("pause");
	
	return 0;
}