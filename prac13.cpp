#include <stdio.h>

int main()
{
	int arr[3] = { 1,2,3 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *(ptr+i));
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d ", ptr[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		//arr[i] = *(arr + i) = *(ptr + i) = *(i + ptr) = i[ptr]
		printf("%d ", i[ptr]); //가능만하 실용성 x
	}
	printf("\n");

	int (*ptr_arr)[3];//길이 3인 배열을 가리키는 포인터 선언
	ptr_arr = &arr;

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", (*ptr_arr)[i]);
	}
}
/*
1. ptr = &ptr[0]
2. *ptr = ptr[0]
3. ptr + 1 = ptr에 sizeof(*ptr)을 더한 값
*/