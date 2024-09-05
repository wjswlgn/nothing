#include <stdio.h>

int main()
{
	int i = 1;

	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	/*for (; ; i++)
	{
		printf("%d\n", i);
	}*/

	int n;
	scanf_s("%d", &n);

	for (int j=0, t=1; j<=n; j++, t*=2)
	{
		printf("2^%d = %d\n", j, t);
	}

	int k;
	scanf_s("%d", &k);

	int sum = 0;
	/*for (int i = 1; i <= k; i++)
	{
		if (i % 3 != 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);*/


	for (int i = 1; i <= k; i++)
	{
		if (i % 3 != 0)
		{
			continue;
		}
		sum += i;
	}
	printf("%d\n", sum);

}