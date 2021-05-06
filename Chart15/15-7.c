//#include <stdio.h>
//
//// 함수앞에도 포인터있음 즉, 함수의 주소
////void 어떠한 자료도 포함시킬수있음
//
//int sum(int a, int b);
//int main()
//{
//	int (*fp)(int, int); // 함수이름 대신에 포인터 선언
//	int res;
//
//	fp = sum;
//	res = fp(10, 20);
//	printf("result : %d\n", res);
//
//	return 0;
//}
//
//int sum(int a, int b)
//{
//
//	return (a + b);
//}