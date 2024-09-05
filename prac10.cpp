#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "Hello, World!";

	printf("%s\n", arr);
	printf("%d\n", sizeof(arr) / sizeof(char));
	// 문자열에 끝을 알리기위해 문자열의 실제 길이 보다 1이 늘어난다 '\0'

	char s[100];
	scanf("%[^\n]s", s);
	printf("%s\n", s);

	char str[] = "Hello";
	int len;
	len = strlen(str);
	printf("%d\n", len);

	char str2[100];

	strcpy(str2, str);
	printf("%s\n", str2);

	strcat(str2, " World!");
	printf("%s\n", str2);

	char stri[] = "sample";
	char str1[] = "simple";

	int cmp = strcmp(stri, str1);
	printf("%d\n", cmp);
}