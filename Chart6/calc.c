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

		printf("�ΰ��� ���� �����ڸ� �Է��Ͻÿ� : (ex: 5 * 9 * 5)\n");
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
				printf("0���δ� ���� �� �����ϴ�.\n");
			}
			else
			{
				result = a / b / c;
				printf("a / b / c= %d\n", result);
			}
		}
		else {
			printf("��Ȯ�� �����ڸ� �Է��Ͻÿ�.");
		}

		printf("�����Ͻ÷��� q�� �Է����ּ��� : \n");
		scanf(" %c", &end);
		if (end == 'q')
			exit(1);
	}

}