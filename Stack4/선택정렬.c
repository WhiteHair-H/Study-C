//// �������� : 0������ �ּҰ��̶�� �����Ѵ�.
//// ������ ���ҵ�� ���Ͽ� ��ȯ�Ѵ�.
//#include <stdio.h>
//
//void SelectionSort(int* pary, int sz)
//{
//	int i, j, t, temp; // ��������
//	for (i = 0; i < sz - 1; i++) 
//	{
//		int min = i; // ���� ��ġ ������ �ε��� i�� ���� min�� ����
//		// i�� ���Һ��� ������ ���ұ��� ���ϸ鼭 ���� ���� ������ �ε����� ���� min�� �����Ѵ�.
//		for (j = i + 1; j < sz; j++)
//		{
//			if (pary[min] > pary[j]) min = j;
//		}
//		// �����Լ� ���� ��ȯ
//		temp = pary[min];
//		pary[min] = pary[i];
//		pary[i] = temp;
//		printf("\n �ܰ� %d : ", i + 1);
//		// �� �ܰ��� ���� ������ ���� ���� ���¸� ���
//		// ���� ���� ������ �����ϱ� ���� ���� ��ġ�ε��� i�� �ϳ� ������Ŵ
//		for (t = 0; t < sz; t++)
//		{
//			printf("%3d", pary[t]);
//		}
//	}
//
//
//}
//
//int main()
//{
//	int ary[] = { 25,75,23,5,19,23,34,85,17 };
//	int size = sizeof(ary) / sizeof(ary[0]);
//	SelectionSort(ary, size);
//
//	return 0;
//}