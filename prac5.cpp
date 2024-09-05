#include <stdio.h>

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	//비교연산자
	//bool 1바이트
	int p = a > b;
	int q = a < b;
	int r = a == b;

	// >=, <=, != 

	printf("%d %d %d\n", p, q, r);

	//논리 연산자
	// && || !

	int n;
	scanf_s("%d", &n);

	bool i = (n >= 1) && (n <= 10);
	bool j = n == 3 || n ==7;
	bool k = !j;

	printf("%d %d %d\n", i, j, k);
}
