#include <stdio.h>
// 상수 constant: const, enum, Macro
#define PI 3.14159 //cannot call address of value,This is possible #define Print printf("Hello, World");

enum EGameState {
	GAMESTATE_MAINMENU,
	GAMESTATE_PLAY,
	GAMESTATE_PAUSE
};
/*
const int GAMESTATE_MAINMENU = 0;
const int GAMESTATE_PLAY = 1;
const int GAMESTATE_PAUSE = 2;
*/

int main()
{
	const float pi = 3.141592;//this value will never change


	EGameState currState = GAMESTATE_MAINMENU;
	//int currState = GAMESTATE_MAINMENU;

	while (true) 
	{
		switch (currState) {
		case GAMESTATE_MAINMENU:
			break;
		case GAMESTATE_PLAY:
			break;
		case GAMESTATE_PAUSE:
			break;
		}
	}
	//삼항 연산자 return (a > b) ? a : b; = if(a>b) return a; return b;

}