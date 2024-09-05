#include <stdio.h>

int main()
{
	typedef int In;
	In n = 20;

	printf("%d\n", n);

	typedef int pair[];
	pair point = { 3,4 }; //int point[2]={3,4};

	printf("%d %d\n", point[0], point[1]);

	typedef const char* String;
	String name = "Doodle"; // char[] name ="";

	printf("%s\n", name);
}