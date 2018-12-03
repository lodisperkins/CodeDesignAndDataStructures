#pragma once

template<typename h>
class DynamicArray
{
private:
	h* data;
	int allocatedElements;
	int usedElements;
public:
	DynamicArray();
	void CreateArray(int initialSize);
	void insertlast(h data);
	void removeLast();
	h getData(int data);
	void sort();
};

template<typename h>
DynamicArray<h>::DynamicArray()
{
}

template<typename h>
 void DynamicArray<h>::CreateArray(int initialSize)
 {
	 data = new h[initialSize];
	 allocatedElements = initialSize;
	 usedElements = 0;
 }

 template<typename h>
 void DynamicArray<h>::insertlast(h newdata)
 {
	 if (usedElements != allocatedElements)
	 {
		 data[usedElements] = newdata;
		 usedElements += 1;
	 }
	 else 
	 {
		 h *temp = new h[allocatedElements*2];
		 
		 for (int i=0; i < usedElements; i++)
		 {
			 temp[i] = data[i];
		 }
		 delete data;
		 for (int i = 0; i < usedElements; i++)
		 {
			 data[i] =temp[i] ;
		 }
		 delete temp;
		 data[usedElements] = newdata;
		 usedElements += 1;
	 }
 }

 template<typename h>
 void DynamicArray<h>::removeLast()
 {
	 usedElements -= 1;
 }

 template<typename h>
h DynamicArray<h>::getData(int index)
 {
	if (index > usedElements - 1)
	{
		return h();
	}
	else
	{
		return data[index];
	}
 }

template<typename h>
void DynamicArray<h>::sort()
{
	int index2=1;
	h swap;
	for (int index1 = 0; index1 < usedElements-1;)
	{
		if (data[index2] < data[index1])
		{
			swap = data[index2];
			data[index2] =data[index1];
			data[index1] = swap;
			if(index2<usedElements)
			index2++;
		}
		else
		{
			if (index2<usedElements)
			index2++;
		}
		if (index2 >= usedElements)
		{
			index1++;
			if(index1+1 < usedElements&&index1+1>0)
				index2 = index1 + 1;
		}
	}

}

