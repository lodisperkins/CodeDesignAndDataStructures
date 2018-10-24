#include <iostream>
struct hero
{
	int mHealth;
	hero(int num)
	{
		mHealth = num;
	}
	hero()
	{

	}
bool operator <(hero other)
{
	return mHealth < other.mHealth;
}
};


hero getlowest(hero arr[], int size)
{
	hero temp;
	for (int i = 0; i != size; i++)
	{
		for (int j = i+1; j != size; j++)
		{
			if (arr[i] < arr[j])
			{
				continue;
			}
			else
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr[0];
}

int main()
{
	
	hero person1(43);
	hero person2(56);
	hero person3(100);
	hero arr[3] = { person3,person2,person1 };
	hero answer = getlowest(arr, 3);
}