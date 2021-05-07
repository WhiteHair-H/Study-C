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
//	// calloc - 자동으로 초기화시킴
//	pi = (int*)calloc(size, sizeof(int));
//	while (1)
//	{
//		printf("양수만 입력하세요 => ");
//		scanf("%d", &num);
//		if (num <= 0)break;
//		if (count == size)
//		{
//			size += 5;
//			// pi_back = pi;
//			pi = (int*)realloc(pi, size * sizeof(int));
//			// if(pi == NULL)pi = pi_back;
//			// 할당된 메모리 공간 추가
//			// 기본 5개 메모리 공간 할당받고 5개 추가
//			// 리턴시 기존 시작주소로 리턴
//			// 하지만 NULL값이 들어올 경우 기본 메모리공간에 문제가 발생
//			// NULL 포인터에 대한 대비
//			// 해결 - 임시포인터 변수에 저장한 후 realloc 실행
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