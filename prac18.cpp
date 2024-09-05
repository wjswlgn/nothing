#include <stdio.h>

typedef struct { int x, y; } Point; //구조체
//struct Point { int x, y; }; 위 코드와 동일한 의미

typedef struct ProductInfo {
	int num;
	char name[75];
	int cost;
};

typedef struct Time
{
	int h, m, s;

	int totalSec() { //member method
		return 3600 * h + 60 * m + s;
	}
};

int main()
{
	Point p;

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);

	ProductInfo myProduct = {4797328, "Khan", 19900};

	ProductInfo* ptrProduct = &myProduct;

	printf("Product Number: %d\n", (*ptrProduct).num);
	printf("Product Name: %s\n", myProduct.name);
	printf("Price: %d\n", ptrProduct->cost); //(*ptrProduct).cost

	Time t = {1, 23, 45};

	printf("%d\n", t.totalSec());
}