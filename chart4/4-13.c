#include <stdio.h>


int main13()
{
	char ch = 128; // 0b 1000 0000
	unsigned char ch1 = 128;
	printf("ch >> 1 : %d\n", ch >> 1); // 0b 1100 0000
	printf("ch >> 1 : %d", ch1 >> 1);

	// 부호비트를 통해서 오른쪽으로 가면 1이 따라옴
	// 부호비트를 통해서 왼쪽으로 가면 0이 따라옴


	//int a = 10;
	//int b = 12;

	//printf("a & b : %d\n", a & b);
	//printf("a ^ b : %d\n", a ^ b); // a 와 b가 참이거나 거짓이면 거짓
	//printf("a | b : %d\n", a | b);
	//printf("~a : %d\n", ~a);
	//printf("a << 1 : %d\n", a << 1);

	//// 오른쪽으로 이동할 경우 부호비트값을 따름 (0, 1)따름
	//printf("a >> 2 : %d\n", a >> 2);

	return 0;
}