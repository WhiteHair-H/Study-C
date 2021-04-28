#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	char star = '*';
	char blank = ' ';
	int i, j, b;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			printf("%c", blank);
		}
		for (b = 0; b < i * 2 - 1; b++)
		{
			printf("%c", star);
		}
		printf("\n");
	}
	for (i = 5; i > 0; i--)
	{
		for (j = 5 - i; j > 0 ; j--)
		{
			printf("%c", blank);
		}
		for (b = 0; b < i * 2 - 1; b++)
		{
			printf("%c", star);
		}
		printf("\n");
	}

	


	return 0;
}