// 비트 연산 $(and) |(or) ^(xor) ~(negate) <<(shift left) >>(shift right)
#include <stdio.h>

int main() 
{
	FILE* in;//스트림
	int n;

	in = fopen("input.txt", "r"); //파일 오픈 r은 읽기 w는 쓰기

	if (in != nullptr) { //파일 있는지 확인
		fscanf(in, "%d", &n);//파일용 스캔
		printf("%d\n", n);
		fclose(in); //파일 닫기
	}

	FILE* ins = fopen("ex.csv","r");
	char ch;
	while (!feof(in)) //end of file fscanf(in, "%c", &ch) !=EOF로 사용가능
	{
		fscanf(in, "%c", &ch);
		printf("%c", ch);
	}

	fclose(ins);
}

