//#include <stdio.h>
//
//int BSearch(int* pary, int sz, int tg)
//{
//	int first = 0; // size = 10  - first = 0 , last = 9
//	int last = sz - 1;
//	int mid;
//
//	while (first <= last)
//	{
//		mid = (first + last) / 2; // �߿� ó���� �������� ���ѵ� 2�� ����
//		if (tg == pary[mid]) return mid;
//		else {
//			if (tg > pary[mid]) first = mid + 1; //  Ÿ���� ũ�� �߰����� ������ , 
//			else last = mid - 1; // ������ ����
//		}
//	}
//	return -1;
//
//}
//
//
//int main()
//{
//	int index;
//	int ary[] = {1,2,3,4,5,6,7,8,9};
//	int size = sizeof(ary) / sizeof(ary[0]);
//
//	index = BSearch(ary, size, 2);
//	if (index == -1) printf("Ž�� ���о�!\n");
//	else
//	{
//		printf("ã�� ���� �ּ� -> %d\n", index);
//	}
//
//	return 0;
//}