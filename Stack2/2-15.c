#include <stdio.h>


void hanoi(int, int, int, int);
int main()
{
	hanoi(5, 'A', 'B', 'C');
	getchar();


	return 0;
}

void hanoi(int n, int start, int work, int target)
{
	if (n == 1)
	{
		printf(" %c���� ���� %d�� %c�� �ű� \n", start, n, target);
		printf("----------------------------\n");
	}
	else
	{
		hanoi(n - 1, start, target, work);
		printf(" %c���� ���� %d�� %c�� �ű� \n", start, n, target);
		hanoi(n - 1, work, start, target);
	}
}