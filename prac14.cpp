#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	int *ptr[4];

	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &d;
	ptr[3] = &c;

	for (int i = 0; i < 4; i++)
	{
		printf("%d\t", *ptr[i]);
	}

	int arr[4] = { 1,2,3,4 };
	int* ptrr[4];

	for (int i = 0; i < 4; i++)
	{
		ptrr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", *ptrr[i]);
	}
}