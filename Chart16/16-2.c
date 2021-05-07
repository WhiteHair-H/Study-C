//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi;
//	int i, sum = 0; // 초기화를 해야 값을 누적시킬 수 있음
//
//	pi = (int*)malloc(5 * sizeof(int));
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다.");
//		exit(1);
//	}
//	printf("다섯 명의 나이를 입력하세요 : ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
//	free(pi);
//
//
//	return 0;
//}