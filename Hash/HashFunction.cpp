#include "HashFunction.h"
#include <time.h>
#include <stdlib.h> 
int Hashfunc::badhash(const char * arr, int size)
{
	unsigned int hash = 0;
	for (unsigned int i = 0; i < size; ++i)
	{
		hash += arr[i];
	}
	return hash;
}

int Hashfunc::myhash(const char * arr, int size)
{
	int hash = 0;
	srand (time(NULL));
	int maximum = rand() % size + 1;
	for (int i = 0; i < maximum; ++i) 
	{
		hash += arr[i];
	}
	return hash;
}
