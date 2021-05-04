//#include <stdio.h>
//// 로또프로그램
//// 1. 로또 번호를 저장할 수 있는 배열 선언
//// 배열이름 = lotto[6]
//// 2. 로또번호 입력
//// 동일한 번호 입력시 : 에러 메세지 출력하고 다시 입력 받으시오
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
////	int temp[6]; // 배열을 사용하지 않고 사용
////
////	printf("6개의 로또번호를 입력하세요 : ");
////	for (i = 0; i < 6; i++)
////	{
////		scanf("%d", &lotto[i]);
////		temp[i] = lotto[i];
////
////		for (j = 0; j < i; j++)
////		{
////			if (temp[j] == lotto[i])
////			{
////				printf("같은 번호가 있습니다\n");
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
//	int temp; // 배열을 사용하지 않고 사용
//
//	printf("6개의 로또번호를 입력하세요 : ");
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
//					printf("같은 번호가 있습니다\n");
//					printf("번호를 다시 입력하세요 : ");
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
//	printf("입력된 로또번호 : ");
//	for (i = 0; i < 6; i++)
//	{
//		printf("%5d", lotto[i]);
//	}
//
//
//}
