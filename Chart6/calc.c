#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a, b, c;
	int result;
	double resd;
	char pm, end;
	while (1)
	{

		printf("두개의 값과 연산자를 입력하시오 : (ex: 5 * 9 * 5)\n");
		scanf("%d %c %d %c %d", &a, &pm, &b , &pm , &c);

		if (pm == '+')
		{
			result = a + b + c;
			printf("a + b + c = %d\n", result);
		}
		else if (pm == '-')
		{
			result = a - b - c;
			printf("a - b - c = %d\n", result);
		}
		else if (pm == '*')
		{
			result = a * b * c;
			printf("a * b * c = %d\n", result);
		}
		
		else if (pm == '/')
		{
			if (b == 0)
			{
				printf("0으로는 나눌 수 없습니다.\n");
			}
			else
			{
				result = a / b / c;
				printf("a / b / c= %d\n", result);
			}
		}
		else {
			printf("정확한 연산자를 입력하시오.");
		}

		printf("종료하시려면 q를 입력해주세요 : \n");
		scanf(" %c", &end);
		if (end == 'q')
			exit(1);
	}

}