//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi;
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int)); // ������� 20����Ʈ �Ҵ�; (int*) ��������
//	if (pi == NULL) // NULL �ƹ��͵� ������ �������� ������
//	{
//		printf("# �޸𸮰� �����մϴ�.\n");
//		exit(1);
//	}
//	pd = (double*)malloc(sizeof(double));
//
//	*pi = 10;
//	*pd = 3.4; // �����߻������� null������ �������߱⶧��
//
//	printf("���������� ��� : %d\n", *pi);
//	printf("�Ǽ������� ��� : %.1lf\n", *pd);
//
//	free(pi); // ���� �Ҵ� ���� ��ȯ
//	free(pd);
//
//	return 0;
//}