#include <stdio.h>
//재귀함수 recursion

void rec(int n)
{
	if (n>5)
	{
		return;
	}
	printf("%d\n", n);
	rec(n + 1);
}

int fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * fac(n - 1);
}

void printArr(int *arr) //arr[4] 배열 매개변수로 넘기기
{
	for (int i=0; i<4; i++)
	{
		arr[i] *= 2;
	}
}

int main()
{
	int arr[4] = { 1,2,3,4 };

	printArr(arr);

	for (int i = 0; i < 4;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	rec(1);
	printf("%d\n", fac(8));
}