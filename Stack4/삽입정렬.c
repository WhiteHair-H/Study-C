#include <stdio.h>
//�������� : �ι�° �ڷ���� �� �ڷḦ ���Ͽ� �����Ѵ�

void insertionSort(int* pary, int sz)
{
	int i, j, t, temp;
	printf("\n������ ���� : ");
	for (i = 1; i < sz; i++)
	{
		for (j = i; j > 0; j--) // ���� ��� ������ �ε��� i�� j�� ����
		{
			if (pary[j] < pary[j - 1]) { // �⺻���� �������� ��
				// swap �Լ� �̿�
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}
		printf("\n %d�ܰ� : ", i);
		for (t = 0; t < sz; t++)
		{
			printf("%3d", pary[t]);
		}
	}

}

void print(int* pary, int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("ary[%d] = %d ", i, pary[i]);
	}
}

int main()
{
	int ary[] = { 4,2,7,5,9,1,8,3,6 };
	int size = sizeof(ary) / sizeof(ary[0]);
	insertionSort(ary, size);
	//print(ary, size);

	return 0;
}