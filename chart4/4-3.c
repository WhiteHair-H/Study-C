#include <stdio.h>


int main3()
{
	int a = 10, b = 20;
	int c = 10, d = 20;

	// 전위, 후위값이 같은 이유는 이미 한줄마다 값을 전달했기때문에 값이 같음
	++a;
	--b;
	c++;
	d--;


	printf("a : %d\n", a);
	printf("b : %d\n", b);

	printf("c : %d\n", c);
	printf("d : %d\n", d);



	return 0;
}