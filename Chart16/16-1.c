//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi;
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int)); // 저장공간 20바이트 할당; (int*) 생략가능
//	if (pi == NULL) // NULL 아무것도 가지고 있지않은 포인터
//	{
//		printf("# 메모리가 부족합니다.\n");
//		exit(1);
//	}
//	pd = (double*)malloc(sizeof(double));
//
//	*pi = 10;
//	*pd = 3.4; // 오류발생이유는 null포인터 지정안했기때문
//
//	printf("정수형으로 사용 : %d\n", *pi);
//	printf("실수형으로 사용 : %.1lf\n", *pd);
//
//	free(pi); // 동적 할당 영역 반환
//	free(pd);
//
//	return 0;
//}