//// �� ���� : ��ǥ���� ���� ���� �˰���
//// ������ �Ǿ� �������� �������� ����ϸ� ������.
//// 1. ���ҵ� �߿��� �Ǻ��� ����.
//// 2. �� �Ǻ��� �������� �տ��� ���� �� , �ڿ��� ū������ ��ġ��Ų��.(����)
//// 3. ���ҵ� ���� ����Ʈ�� ��������� ������ ��Ų��.(����)
//// 4. ���ĵ� ���� ����Ʈ���� �����Ѵ�.(����)
//#include <stdio.h>
//
//void quickSort(int*, int, int);
//
//int main()
//{
//	int ary[] = { 3,5,2,4,7 };
//	int size = sizeof(ary) / sizeof(ary[0]);
//	quickSort(ary, 0, size - 1);
//
//	return 0;
//}
//
//void quickSort(int* pary, int left, int right)
//{
//
//	if (left >= right) return;
//	int pivot = left; // = 0
//	int lleft = pivot + 1; // 1��°��
//	int lright = right; // ��������
//	int temp, k;
//
//	while (lleft <= lright) // ��ü�� �ȵɶ����� ������ ������ ����
//	{
//		while (pary[lleft] <= pary[pivot]) lleft++;   // �������� ���ĵǾ����� �������� �̵�
//		while (pary[lright] >= pary[pivot] && lright > left) lright--; // ū���� ���ĵǾ����� �̵� &&
//
//		if (lleft > lright) // lleft ��ü
//		{
//			// ���� ������ �ٲ�
//			temp = pary[lright];
//			pary[lright] = pary[pivot];
//			pary[pivot] = temp;
//		}
//		else
//		{
//			// ���� �ٲ��� �ʾ����� �ٲ��� 
//			temp = pary[lright];
//			pary[lright] = pary[lleft];
//			pary[lleft] = temp;
//		}
//	}
//
//	for (k = 0; k < right + 1; k++) printf("%d ", pary[k]);
//	printf("\n");
//	quickSort(pary, left, lright - 1);
//	quickSort(pary, lright + 1, right);
//
//
//
//}