//#include <stdio.h>
//
//int* sum(int a, int b);
//
//int main()
//{
//	int* resp;
//
//	resp = sum(10, 20);
//	printf("두 정수의 합 : %d\n", *resp);
//
//	return 0;
//}
//
//int* sum(int a, int b)
//{
//	// static이 있는 이상 살아있기때문에 main에 전달할 수 있음
//	static int res; 
//
//	res = a + b;
//
//	return &res;
//}