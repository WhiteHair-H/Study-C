//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("�迭�� �������� ����\n");
//	printf("\n%p %p\n", &a, pa);
//	printf("=============================\n");
//
//	// �׻� ������ Ÿ������ ��������� �ּҰ��� ������ �߻���������
//	int ary1[2] = { 1, 2 };
//	int* pary1 = ary1;
//	//int (*pary1) = ary1; ���� ����
//	//char* pary1 = ary1; X �ּҰ� ���� �߻�
//	printf("%p %p\n", ary1, pary1);
//	printf("%p %p\n", ary1 + 1, pary1 + 1);
//	// ������ �ּҸ� ����Ű�� �ֱ⿡ ������ �ص� ���� ���� ����
//	printf("=============================\n");
//
//	char ary2[2] = { 'a' , 'b' };
//	//int ary2[2] = { 'a' , 'b' }; X �ּҰ� ���� �߻�
//	char* pary2 = ary2;
//	printf("%p %p\n",  ary2, pary2);
//	printf("%p %p\n",  ary2 + 1 ,pary2 + 1 );
//	printf("==============================\n");
//
//	int ary3[][2] = { {1,2} , {3,4} };
//	//int *pary3 = ary3; X �ּҰ� ���� �߻�
//	int (* pary3)[2] = ary3;
//	printf("%p %p\n",  ary3, pary3);
//	printf("%p %p\n",  ary3 + 1, pary3 + 1);
//	printf("==============================\n");
//
//	// ���ڿ��� ��� ����������
//	char *ary4[2] = { "hi" , "good" }; // ������ �迭
//	char** pary4 = ary4;
//	printf("%p %p\n", ary4, pary4);
//	printf("%p %p\n", ary4 + 1, pary4 + 1);
//
//	return 0;
//}