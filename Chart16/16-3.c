//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi; // *pi_back;
//	int size = 5;
//	int count = 0;
//	int num;
//	int i;
//
//	// calloc - �ڵ����� �ʱ�ȭ��Ŵ
//	pi = (int*)calloc(size, sizeof(int));
//	while (1)
//	{
//		printf("����� �Է��ϼ��� => ");
//		scanf("%d", &num);
//		if (num <= 0)break;
//		if (count == size)
//		{
//			size += 5;
//			// pi_back = pi;
//			pi = (int*)realloc(pi, size * sizeof(int));
//			// if(pi == NULL)pi = pi_back;
//			// �Ҵ�� �޸� ���� �߰�
//			// �⺻ 5�� �޸� ���� �Ҵ�ް� 5�� �߰�
//			// ���Ͻ� ���� �����ּҷ� ����
//			// ������ NULL���� ���� ��� �⺻ �޸𸮰����� ������ �߻�
//			// NULL �����Ϳ� ���� ���
//			// �ذ� - �ӽ������� ������ ������ �� realloc ����
//		}
//		pi[count++] = num;
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);
//	}
//	free(pi);
//
//	return 0;
//}