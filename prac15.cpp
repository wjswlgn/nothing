#include <stdio.h>

int plus(int a, int b)
{
	return a + b;
}

void swap(int *x, int *y) // call by value
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swap_r(int& x, int& y); //prototype

int main()
{
	int sum = plus(3, 5);
	printf("%d\n", sum);

	int a, b;
	scanf_s("%d %d", &a, &b);

	swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);

	swap_r(a, b);
	printf("a: %d, b: %d\n", a, b);
}

void swap_r(int& x, int& y) //call by reference
{
	int tmp = x;
	x = y;
	y = tmp;
}