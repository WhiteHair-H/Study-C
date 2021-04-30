#include <stdio.h>

// 전역변수 사용
// 전역변수는 아무데서나 사용할 수 있기때문에 안전장치가 없으므로 자제
int a = 10, b = 20;
void swap();
int main()
{
	//int a = 10, b = 20;
	int temp;

	printf("바꾸기전 a, b : %d , %d\n", a, b);
	
	swap();
	printf("바꾼후 a, b : %d , %d\n", a, b);

	return 0;
}

void swap(void)
{	
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}