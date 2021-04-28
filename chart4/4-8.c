#include <stdio.h>


int main8()
{
	int a = 20, b = 3;
	double res;


	res = ((double)a / b);
	/*res = ((double)a) / ((double)b);*/
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	//(double)res = a + b 좌항에 있는 연산자는 형변환이 불가능하다(다른 메모리영역을 침범할 수 있기때문에 불가능하다)

	return 0;
}