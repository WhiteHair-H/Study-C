//#include <stdio.h>
//// �ζ����α׷�
//// 1. �ζ� ��ȣ�� ������ �� �ִ� �迭 ����
//// �迭�̸� = lotto[6]
//// 2. �ζǹ�ȣ �Է�
//// ������ ��ȣ �Է½� : ���� �޼��� ����ϰ� �ٽ� �Է� �����ÿ�
//// input_lotto(), print_lotto()
//
//void input_lotto(int* lotto);
//void print_lotto(int* lotto);
//
//int main()
//{
//	int lotto[6];
//
//	input_lotto(lotto);
//	print_lotto(lotto);
//
//	return 0;
//}
//
////void input_lotto(int* lotto)
////{
////	int i, j;
////	int temp[6]; // �迭�� ������� �ʰ� ���
////
////	printf("6���� �ζǹ�ȣ�� �Է��ϼ��� : ");
////	for (i = 0; i < 6; i++)
////	{
////		scanf("%d", &lotto[i]);
////		temp[i] = lotto[i];
////
////		for (j = 0; j < i; j++)
////		{
////			if (temp[j] == lotto[i])
////			{
////				printf("���� ��ȣ�� �ֽ��ϴ�\n");
////				i--;
////				break;
////			}
////		}
////	}
////}
//
//
//void input_lotto(int* lotto)
//{
//	int i, j;
//	int temp; // �迭�� ������� �ʰ� ���
//
//	printf("6���� �ζǹ�ȣ�� �Է��ϼ��� : ");
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%d", &lotto[i]);
//		temp = lotto[i];
//
//		for (j = 0; j < i; j++)
//		{
//			while (1)
//			{
//				if (temp == lotto[j])
//				{
//					printf("���� ��ȣ�� �ֽ��ϴ�\n");
//					printf("��ȣ�� �ٽ� �Է��ϼ��� : ");
//					scanf("%d", &lotto[j]);
//				}
//				else
//				{
//					break;
//				}
//			}
//
//		}
//	}
//}
//
//
//void print_lotto(int* lotto)
//{
//	int i;
//
//	printf("�Էµ� �ζǹ�ȣ : ");
//	for (i = 0; i < 6; i++)
//	{
//		printf("%5d", lotto[i]);
//	}
//
//
//}
