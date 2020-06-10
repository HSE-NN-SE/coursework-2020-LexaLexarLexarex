#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "benchmark.h"
#include "tests.h"

#define SIZE_BIG 10000000
#define SIZE_SMALL 100000

enum TEST {
	test1 = 1, test2, test3, test4, test5
};

int main() {
	srand(time(0));
	
	int size;
	int* array;
	for (int i = 0; i < 6; i++) {
		if( i%6 == 0) PrintTable();
		PrintNameSort(i);
		if (i < 3) {
			size = SIZE_SMALL;
			array = (int*)malloc(SIZE_SMALL * sizeof(int));
		}
		else {
			size = SIZE_BIG;
			array = (int*)malloc(SIZE_BIG * sizeof(int));
		}
		SortTests(array, size);
		Benchmark(i, array, test1, size);	//	1
		SelectBadTests(array, size);
		Benchmark(i, array, test2, size);	//	2
		BubbleBadTests(array, size);
		Benchmark(i, array, test3, size);	//	3
		InsertBadTests(array, size);
		Benchmark(i, array, test4, size);	//	4
		QuickBadTests(array, size);
		Benchmark(i, array, test5, size);
		printf("\n");
	}
	for (int i = 0; i < 6; i++) {
		if (i % 6 == 0) PrintTable();
		PrintNameSort(i);
		if (i < 3) size = SIZE_SMALL;
		else size = SIZE_BIG;
		SortTests(array, size);
		Benchmark(i, array, test1, size);	//	1
		SelectBadTests(array, size);
		Benchmark(i, array, test2, size);	//	2
		BubbleBadTests(array, size);
		Benchmark(i, array, test3, size);	//	3
		InsertBadTests(array, size);
		Benchmark(i, array, test4, size);	//	4
		QuickBadTests(array, size);
		Benchmark(i, array, test5, size);
		printf("\n");
	}
	for (int i = 0; i < 6; i++) {
		if (i % 6 == 0) PrintTable();
		PrintNameSort(i);
		if (i < 3) size = SIZE_SMALL;
		else size = SIZE_BIG;
		SortTests(array, size);
		Benchmark(i, array, test1, size);	//	1
		SelectBadTests(array, size);
		Benchmark(i, array, test2, size);	//	2
		BubbleBadTests(array, size);
		Benchmark(i, array, test3, size);	//	3
		InsertBadTests(array, size);
		Benchmark(i, array, test4, size);	//	4
		QuickBadTests(array, size);
		Benchmark(i, array, test5, size);
		printf("\n");
	}
	for (int i = 0; i < 6; i++) {
		if (i % 6 == 0) PrintTable();
		PrintNameSort(i);
		if (i < 3) size = SIZE_SMALL;
		else size = SIZE_BIG;
		SortTests(array, size);
		Benchmark(i, array, test1, size);	//	1
		SelectBadTests(array, size);
		Benchmark(i, array, test2, size);	//	2
		BubbleBadTests(array, size);
		Benchmark(i, array, test3, size);	//	3
		InsertBadTests(array, size);
		Benchmark(i, array, test4, size);	//	4
		QuickBadTests(array, size);
		Benchmark(i, array, test5, size);
		printf("\n");
	}
	return 0;
}