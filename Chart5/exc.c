#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// q�Է½� ����


int main()
{
	int a, b, c;
	char order, end;

	printf("�ΰ��� ������ �����ڸ� �Է��Ͻÿ� : \n");
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
		printf("�����ڰ� �ƴմϴ�");
	}

	printf("���� : %d\n", c);




	return 0;
}