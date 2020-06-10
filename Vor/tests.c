#include <stdlib.h>
#include <stdio.h>
#include "tests.h"


void SortTests(int* array, int size)
{
	int now = 0;
	for (int i = 0; i < size; i++)
	{
		array[i] = now + rand() % (size / 10) + 1;
		now = array[i];
	}
}


//InsertionSort
void InsertBadTests(int* array, int size)
{
	int k;
	SortTests(array, size);
	for (int i = 0; i < size / 2; i++)
	{
		k = array[i];
		array[i] = array[size - i];
		array[size - i] = k;
	}
}

//selectionsort
void SelectBadTests(int* array, int size)
{
	int k;
	SortTests(array, size);
	k = array[0];
	for (int i = 0; i < size - 1; i++) 
		array[i] = array[i + 1];
	array[size] = k;
}

//Bubblesort
void BubbleBadTests(int* array, int size)
{
	int now = 0;
	for(int i = size-1; i>=0; i--)
	{
		array[i] = now + rand() % (size / 10) + 1;
		now = array[i];
	}
}

//quicksort
void QuickBadTests(int* array, int size)
{
	SortTests(array, size);
	int even = 0;
	int* a;
	a = (int*)malloc((size) * sizeof(int));
	int odd = size - 1;
	for (int i = 0; i < size; i++)
		a[i] = array[i];
	for (int i = 0; i <= size - 1; i++)
	{
		if ((i % 2) == 1)
		{
			array[even] = a[i];
			even++;
		}
		else
		{
			array[odd] = a[i];
			odd--;
		}
	}
}


