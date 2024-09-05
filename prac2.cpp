#include <stdio.h>

int main()
{
	int a;
	int b = 3;

	a =3;
	printf("%d\n", a);

	a =5;
	printf("%d\n", a);

	printf("%d %% %d = %d", a, b, a%b); //% printf 사용 시 % 두번 입력해야 터센트 기호가 출력됨

	//int와 float는 4바이트(32비트), double은 8바이트, char은 1바이트
	//short는 2바이트, long은 4바이트, long long은 8바이트
	//실수형은 float double
	//정수형은 int long longlong char short
	//실수를 정수형 변수에 담을 수 없지만 정수는 실수형 변수에 담을 수 있다 
	
	//unsigned signed
	//unsigned 사용 시 부호를 저장하는 비트를 무시하고 숫자 저장용도로 사용
	//signed는 그냥 자료형의 사용법과 같으나 오류 발생을 줄이거나 가독성을 위해 붙인다
	
	//void는 리턴값이 없는 함수의 자료형 
	//bool은 참, 거짓(8 비트)
}
