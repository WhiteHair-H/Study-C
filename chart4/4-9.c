#include <stdio.h>


int main9()
{
	int a = 10;
	double b = 3.4;

	// sizeof = ������ ; �̸��ڿ� �ִ� ���� �Լ�
	printf("int�� ������ ũ�� : %d\n", sizeof a);
	printf("double���� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ ������� ũ�� : %d\n", sizeof (1.5 + 3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));



	return 0;
}