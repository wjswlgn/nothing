#include <stdio.h>

int main()
{
	printf("%d %d %d\n", sizeof(int), sizeof(float), sizeof(char));
	
	int a;
	char b;
	float c;

	printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));

	//sizeof(x): x의 크기를 알려줌, 자료형의 크기나 변수 이름이 들어갈 수 있음

	//형변환

	int math = 90;
	int sci = 95;
	int eng = 96;
	int sum = math + sci + eng;
	double avg = (double)sum / 3;
	// 실수 / 정수 = 실수 예제로 실수와 정수를 더해도 실수로 나온다

	printf("%f\n",avg);

}