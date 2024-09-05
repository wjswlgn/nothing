#include <stdio.h>

int main() 
{
	int choice;

	//makeChoice:   
	//goto문은 안 쓰는 것이 매우 좋다.

	printf("New Game: 1\n");
	printf("Save File: 2\n");
	printf("Setting: 3\n");
	printf("Credit: 4\n");

	scanf_s("%d", &choice);

	switch (choice){
	case 1:
		printf("Starting New Game.\n");
		break;
	case 2:
		printf("Loading Past Data.\n");
		break;
	case 3:
		printf("Settings.\n");
		break;
	case 4:
		printf("Credits.\n");
		break;
	default:
		printf("Invalid Input.\n\n");
		//goto makeChoice;
		break;
	}

	/*if (choice == 1)
	{
		printf("Opening New World.\n");
	}
	else if (choice == 2)
	{
		printf("Loading Save File.\n");
	}
	else if (choice == 3)
	{
		printf("Entering Settings.\n");
	}
	else if (choice == 4)
	{
		printf("Credits.\n");
	}
	else
	{
		printf("Invalid Input.\n");
	}*/


	//goto의 유용한 예시
	
	int i = 0;
	repeat:
	printf("%d\n",i);
	if (i < 10)
	{
		i++;
		goto repeat;
	}
}