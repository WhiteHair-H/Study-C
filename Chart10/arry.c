#include <stdio.h>

int main()
{
	int a = 10; // �ڵ����� ����(��������)
	int* pa; // ������ ���� ����(* ���������� ��Ÿ���� ��ȣ�̴�)
	pa = &a; // ������ ������ ���� a�� �ּҸ� �����Ѵ�.(������ pa�� a�� ����Ų��.)
	int ary[] = { 1,2,3,4,5 };
	int* pary = ary;
	int i;
	int size = sizeof(ary) / sizeof(ary[0]);


	printf("���� a�� ����� �� : %d\n", a);
	printf("���� a�� �ּ� : %p\n", &a);
	printf("������ ���� pa�� ����� �� : %p\n", pa);
	printf("���� a�� ����� �� : %d\n" , *pa);

	for (i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\t\n", i, ary[i]);
		ary[i]++;
	}

	printf("\n1������\n");

	for (i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\t\n", i, pary[i]);
		pary[i]++;
	}
	printf("\n1������\n");

	for (i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\t\n", i, *(pary + i));
	}


	return 0;
}