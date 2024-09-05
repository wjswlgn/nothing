#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	// &: 포인터
	scanf("%d %d", &a, &b); 

	printf("%d %d\n", a, b);

	//산술 연산자 +, -, *, /, %, =, +=, -=, *=, /=, %=. ++. --
	int num = 5;
	num += 6; //num = num + 6 
	printf("%d\n", num);
}