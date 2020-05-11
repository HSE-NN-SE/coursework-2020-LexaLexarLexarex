#include<stdio.h>
#include<stdlib.h>
#define len 100000
#define length 10000000

void RandomSortTests()
{
	FILE* test_1;
	if ((test_1 = fopen("RandomTests.txt", "w")) == NULL)
	{
		printf("Fatal error: file can't open.\n");
		exit(1);
	}
	for (int i = 0; i < len; i++)
		fprintf(test_1, "%d ", rand());
	fprintf(test_1, "%s\n", "");
	for (int i = 0; i < length; i++)
		fprintf(test_1, "%d ", rand());
	fclose(test_1);
}

void MiniSortTests()
{
	FILE* test_2;
	if ((test_2 = fopen("MiniSortTests.txt", "w")) == NULL)
	{
		printf("Fatal error: file can't open.\n");
		exit(1);
	}
	long int k = 0, value = 0;
	for (int i = 0; i < len;)
	{
		k = rand() % 100 + 1;
		if (i + k > len)
			k = len - i;
		i = i + k;
		for (int j = 0; j < k; j++) {
			value = value + rand() % 10000;
			fprintf(test_2, "%d ", value);
		}
		k = 0;
		value = 0;
	}
	fprintf(test_2, "%s\n", "");
	for (int i = 0; i < length;)
	{
		k = rand() % 100 + 1;
		if (i + k > length)
			k = length - i;
		i = i + k;
		for (int j = 0; j < k; j++) {
			value = value + rand() % 10000;
			fprintf(test_2, "%d ", value);
		}
		k = 0;
		value = 0;
	}
	fclose(test_2);
}

void SvopSortTests()
{
	FILE* test_3;
	if ((test_3 = fopen("SvopSortTests.txt", "w")) == NULL)
	{
		printf("Fatal error: file can't open.\n");
		exit(1);
	}
	unsigned long long int value_0 = 0, value_2 = 0, k = 0;
	int h;
	for (int i = 0; i < len; )
	{
		k = rand() % 100 + 1;
		if (i + k > len)
			k = len - i;
		i = i + k;
		for (int j = 0; j < k - 1; j++)
		{
			value_2 = value_0;
			value_0 = value_0 + rand() % 10000;
			fprintf(test_3, "%lld ", value_0);
		}
		fprintf(test_3, "%lld ", value_0 - rand() % 1000);
		k = 0;
	}
	printf("Test\n");
	scanf("%d", &h);
	value_0 = 0;
	value_2 = 0;
	fprintf(test_3,"%s\n", "");
	for (int i = 0; i < length; )
	{
		k = rand() % 100 + 1;
		if (i + k > length)
			k = length - i;
		i = i + k;
		for (int j = 0; j < k - 1; j++)
		{
			value_2 = value_0;
			value_0 = value_0 + rand() % 10000;
			fprintf(test_3, "%lld ", value_0);
		}
		fprintf(test_3, "%lld ", value_0 - rand() % 10000);
		k = 0;
	}
	printf("Test\n");
	scanf("%d", &h);
	fclose(test_3);
}

void RepeatSortTests()
{
	int h;
	printf("Test\n");
	scanf("%d", &h);
	FILE* test_4;
	if ((test_4 = fopen("RepeatSortTests.txt", "w")) == NULL)
	{
		printf("Fatal error: file can't open.\n");
		exit(1);
	}
	unsigned long long int value_0 = 0;
	int k = 0;
	for (int i = 0; i < len;)
	{
		k = rand() % 1000 + 1;
		if (i + k > len)
			k = len - i - 1;
		i = i + k + 1;
		for (int j = 0; j < k; j++)
		{
			value_0 = value_0 + rand() % 1000;
			fprintf(test_4, "%lld ", value_0);
		}
		k = rand() % 1000 + 1;
		if (i + k > len)
			k = len - i - 1;
		i = i + k + 1;
		value_0 = value_0 + rand() % 1000;
		for (int j = 0; j < k; j++)
			fprintf(test_4, "%lld ", value_0);
	}
	value_0 = 0;
	fprintf(test_4, "%s\n", "");
	for (int i = 0; i < length;)
	{
		k = rand() % 1000 + 1;
		if (i + k > length)
			k = length - i - 1;
		i = i + k + 1;
		for (int j = 0; j < k; j++)
		{
			value_0 = value_0 + rand() % 1000;
			fprintf(test_4, "%lld ", value_0);
		}
		k = rand() % 1000 + 1;
		if (i + k > length)
			k = length - i - 1;
		i = i + k + 1;
		value_0 = value_0 + rand() % 1000;
		for (int j = 0; j < k; j++)
			fprintf(test_4, "%lld ", value_0);
	}
	fclose(test_4);
}
int main(int argc, char* argv[])
{
	int h;
	RepeatSortTests();
	printf("RepeatSortTests were successfully generated.\nGenerating is ended.\n");
	scanf("%d", &h);
	SvopSortTests();
	printf("SvopSortTests were successfully generated. 3/4\n");
	RandomSortTests();
	printf("RandomTests were successfully generated. 1/4\n");
	MiniSortTests();
	printf("MiniSortTests were successfully generated. 2/4\n");
	
	scanf("%d", &h);
	
	return 0;
}