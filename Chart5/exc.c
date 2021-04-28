#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// q입력시 종료


int main()
{
	int a, b, c;
	char order, end;

	printf("두개의 정수와 연산자를 입력하시오 : \n");
	scanf("%d %c %d", &a, &order, &b);


	if (order == '+')
	{
		c = a + b;

	}
	else if (order == '-')
	{
		c = a - b;

	}
	else if (order == '*')
	{
		c = a * b;

	}
	else if (order == '/')
	{
		c = a / b;

	}
	else if (order == '%')
	{
		c = a % b;

	}
	else
	{
		printf("연산자가 아닙니다");
	}

	printf("값은 : %d\n", c);




	return 0;
}