#include <stdio.h>


int main13()
{
	char ch = 128; // 0b 1000 0000
	unsigned char ch1 = 128;
	printf("ch >> 1 : %d\n", ch >> 1); // 0b 1100 0000
	printf("ch >> 1 : %d", ch1 >> 1);

	// ��ȣ��Ʈ�� ���ؼ� ���������� ���� 1�� �����
	// ��ȣ��Ʈ�� ���ؼ� �������� ���� 0�� �����


	//int a = 10;
	//int b = 12;

	//printf("a & b : %d\n", a & b);
	//printf("a ^ b : %d\n", a ^ b); // a �� b�� ���̰ų� �����̸� ����
	//printf("a | b : %d\n", a | b);
	//printf("~a : %d\n", ~a);
	//printf("a << 1 : %d\n", a << 1);

	//// ���������� �̵��� ��� ��ȣ��Ʈ���� ���� (0, 1)����
	//printf("a >> 2 : %d\n", a >> 2);

	return 0;
}