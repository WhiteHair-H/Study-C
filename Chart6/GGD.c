#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// ��� �������� ����ұ��?
// ���� �Է½� ���ڿ� �´� ������ ���

int mainGGD()
{
	int i, j;

	printf("��� �������� ����ұ��?\n");
	scanf("%d", &j);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", j, i, i * j);
	}




	return 0;
}