#include <stdio.h>

int main()
{
	int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

	for (int i=0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	int board[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
}