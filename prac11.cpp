#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//포인터(ptr): 변수의 주소를 저장하는 변수
	int a = 20;
	char c = 'h';

	int* ptr_a;
	char* ptr_c;

	ptr_a = &a;
	ptr_c = &c;

	printf("Value of a: %d\n", a);
	printf("Address of a: %d\n", &a);
	printf("Value of ptr a: %d\n", ptr_a);
	printf("Value of ptr c locate: %d\n", *ptr_a);

	printf("Value of c: %d\n", c);
	printf("Adress of c: %d\n", &c);
	printf("Value of ptr c: %d\n", ptr_c);
	printf("Value of ptr c locate: %d\n", *ptr_c);

	int n = 10;

	int* ptr;
	ptr = &n;

	int** ptrptr;
	ptrptr = &ptr;

	printf("n = %d\n", n); //변수
	printf("&n = %d\n", &n);//변수의 주소

	printf("ptr = %d\n", ptr);//변수의 주소
	printf("&ptr = %d\n", &ptr);//포인터의 주소

	printf("ptrptr = %d\n", ptrptr);//포인터의 주소값을 담는 포인터
	printf("*ptrptr = %d\n", *ptrptr);//포인터의 값을 담은 포인터
	printf("**ptrptr = %d\n", **ptrptr); //변수의 값
}