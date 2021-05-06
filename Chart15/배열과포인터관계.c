//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("배열과 포인터의 관계\n");
//	printf("\n%p %p\n", &a, pa);
//	printf("=============================\n");
//
//	// 항상 동일한 타입으로 설정해줘야 주소값에 문제가 발생하지않음
//	int ary1[2] = { 1, 2 };
//	int* pary1 = ary1;
//	//int (*pary1) = ary1; 같은 형태
//	//char* pary1 = ary1; X 주소값 문제 발생
//	printf("%p %p\n", ary1, pary1);
//	printf("%p %p\n", ary1 + 1, pary1 + 1);
//	// 동일한 주소를 가리키고 있기에 연산을 해도 같은 값이 나옴
//	printf("=============================\n");
//
//	char ary2[2] = { 'a' , 'b' };
//	//int ary2[2] = { 'a' , 'b' }; X 주소값 문제 발생
//	char* pary2 = ary2;
//	printf("%p %p\n",  ary2, pary2);
//	printf("%p %p\n",  ary2 + 1 ,pary2 + 1 );
//	printf("==============================\n");
//
//	int ary3[][2] = { {1,2} , {3,4} };
//	//int *pary3 = ary3; X 주소값 문제 발생
//	int (* pary3)[2] = ary3;
//	printf("%p %p\n",  ary3, pary3);
//	printf("%p %p\n",  ary3 + 1, pary3 + 1);
//	printf("==============================\n");
//
//	// 문자열일 경우 포인터지정
//	char *ary4[2] = { "hi" , "good" }; // 포인터 배열
//	char** pary4 = ary4;
//	printf("%p %p\n", ary4, pary4);
//	printf("%p %p\n", ary4 + 1, pary4 + 1);
//
//	return 0;
//}