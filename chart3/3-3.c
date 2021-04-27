#include <stdio.h>

int main3()
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 214778364;
	long long lln = 123132132132132;

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);


	return 0;
}