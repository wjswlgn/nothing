#include <stdio.h>

int main() 
{
	int i = 1;

	while(i<=10)
	{
		printf("%d\n", i);
		i++;
	}
	
	/*while (true)
	{
		printf("%d\n", i);
		i++;
	}*/

	int n;

	do {
		printf("Please type 0.\n");
		scanf_s("%d", &n);
	} while (n != 0);
}