#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//exit(0) 읽히면 코드를 바로 멈춤
int main() 
{
	char ch;

	ch = getchar(); //장점 빠름
	putchar(ch);

	char str[100];

	gets_s(str);
	puts(str);

	char stri[] = "456";
	int n;

	sscanf_s(stri, "%d", &n);
	printf("%d\n", n);

	srand(time(NULL)); // 1970이후로 지난 시간 초 단위, 랜덤값의 시드 지정

	for (int i = 1; i <= 10; i++)
	{
		printf("%d ", rand()); //rand() % 10 + 1 (1부터 10까지의 수)
	}
}