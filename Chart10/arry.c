#include <stdio.h>

int main()
{
	int a = 10; // 자동변수 선언(지역변수)
	int* pa; // 포인터 변수 선언(* 포인터임을 나타내는 기호이다)
	pa = &a; // 포인터 변수에 변수 a의 주소를 저장한다.(포인터 pa는 a를 가리킨다.)
	int ary[] = { 1,2,3,4,5 };
	int* pary = ary;
	int i;
	int size = sizeof(ary) / sizeof(ary[0]);


	printf("변수 a에 저장된 값 : %d\n", a);
	printf("변수 a의 주소 : %p\n", &a);
	printf("포인터 변수 pa에 저장된 값 : %p\n", pa);
	printf("변수 a에 저장된 값 : %d\n" , *pa);

	for (i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\t\n", i, ary[i]);
		ary[i]++;
	}

	printf("\n1씩증가\n");

	for (i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\t\n", i, pary[i]);
		pary[i]++;
	}
	printf("\n1씩증가\n");

	for (i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\t\n", i, *(pary + i));
	}


	return 0;
}