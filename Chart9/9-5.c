//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//
//	// 주소는 32비트 이기에 4바이트 차지 따라서 주소변경 불가능
//	// 포인터는 4바이트 크기
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//
//	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
//	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
//	printf("double * 포인터의 크기 : %d\n", sizeof(pd));
//
//	printf("char * 포인터가 가리키는 크기 : %d\n", sizeof(*pc));
//	printf("int * 포인터가 가리키는 크기 : %d\n", sizeof(*pi));
//	printf("double * 포인터가 가리키는 크기 : %d\n", sizeof(*pd));
//
//
//
//	return 0;
//}