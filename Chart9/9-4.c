//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 20;
//	const int* pa = &a; // �����Ͱ� ����Ű�� ���� �����͸����ȭ
//	int* const pb = &b; // ������ ��ü�� ���ȭ
//
//	printf("���� b�� : %d\n", *pb);
//
//
//	printf("���� a�� : %d\n", *pa);
//	pa = &b;
//	printf("���� b�� : %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("���� a�� : %d\n", *pa);
//	a = 30;
//	printf("���� a�� : %d\n", *pa);
//
//	return 0;
//}