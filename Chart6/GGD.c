#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 몇단 구구단을 출력할까요?
// 숫자 입력시 숫자에 맞는 구구단 출력

int mainGGD()
{
	int i, j;

	printf("몇단 구구단을 출력할까요?\n");
	scanf("%d", &j);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", j, i, i * j);
	}




	return 0;
}