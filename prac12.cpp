#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("arr value: %d\n", arr); //배열의 첫쨰 주소값 = &arr[0]

	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %d\n", i, &arr[i]); //i가 1씩 늘어날 수록 배열의 주솟값이 4바이트씩 늘어나는 걸 볼 수 있다
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr + i));//arr[i]
	}
	printf("\n");

	for (int* ptr = arr; ptr < arr + 10; ptr++)// arr은 첫째주소, +10은 40 주소칸
	{
		printf("%d ", *ptr);
	}
}