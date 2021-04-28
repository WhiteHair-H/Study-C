#include <stdio.h>

int main11()

{
	int a = 10, b = 20;
	int res;

	// 콤마연산자는 대입연산자보다 우선순위가 낮음
	// 연산자우선순위는 암기하지말기 - 우선순위를 매기기 위해서는 괄호사용
	res = (++a, ++b); 
	/*res = ++a, ++b;*/

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);
	printf("res:%d\n", res);


	return 0;
}