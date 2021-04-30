//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 20;
//	const int* pa = &a; // 포인터가 가리키는 곳의 데이터를상수화
//	int* const pb = &b; // 포인터 자체가 상수화
//
//	printf("변수 b값 : %d\n", *pb);
//
//
//	printf("변수 a값 : %d\n", *pa);
//	pa = &b;
//	printf("변수 b값 : %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("변수 a값 : %d\n", *pa);
//	a = 30;
//	printf("변수 a값 : %d\n", *pa);
//
//	return 0;
//}