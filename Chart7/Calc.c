#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void Calc();
void isEnd(char);
void isResult(char op, int num1, int num2);

int main(void)
{
	Calc();

	return 0;
}


void Calc()
{
	int num1 = 0, num2 = 0;
	char op;
	char end = ' ';
	while (1)
	{
		printf("�ΰ��� ���� �����ڸ� �Է��Ͻÿ� : (ex: 5 * 9)\n");
		scanf("%d %c %d", &num1, &op, &num2);
		
		

		if (end == 'q')
		{
			printf("���α׷��� �����Ͻ÷��� q�� �����ּ���\n");
			scanf("%c", &op);
			exit(1);
		}
		else
		{
			isResult(op, num1, num2);
		}


	}

}

//void isEnd(char op)
//{
//	printf("���α׷��� �����Ͻ÷��� q�� �����ּ���\n");
//	scanf("%c", &op);
//	if (op == 'q') exit(1);
//}
void isResult(char op, int num1, int num2)
{
	if (op == '+')
	{
		printf("%d + %d = %d\n", num1, num2, (num1 + num2));
	}
	else if (op == '-')
	{
		printf("%d - %d = %d\n", num1, num2, (num1 - num2));

	}
	else if (op == '*')
	{
		printf("%d * %d = %d\n", num1, num2, (num1 * num2));

	}
	else if (op == '/')
	{
		printf("%d * %d = %d\n", num1, num2, (num1 / num2));

	}


}
