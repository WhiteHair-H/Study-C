//#include <stdio.h>
//
//int LSearch(int* pary, int sz, int tg)
//{
//	int i;
//
//	for (i = 0; i < sz; i++)
//	{
//		if (tg == pary[i]) return i; // tg ���� �迭�� ������ i�� ��ȯ
//	}
//	return -1; // �ƴҰ�� -1 ��ȯ
//}
//
//int main()
//{
//	int index;
//	int ary[] = { 3, 5 , 8 ,2, 7 ,6, 1 }; // �迭����
//	int size = sizeof(ary) / sizeof(ary[0]); // �迭 ������ ����
//	index = LSearch(ary, size, 9); // �Լ� �ε��� ����
//	if (index == -1) printf("ã�����"); // -1�� ��� ã�� ����
//	else {
//		printf("ã�� �� -> %d", ary[index]);
//	}
//
//	return 0;
//}
//
