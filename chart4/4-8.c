#include <stdio.h>


int main8()
{
	int a = 20, b = 3;
	double res;


	res = ((double)a / b);
	/*res = ((double)a) / ((double)b);*/
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf�� ��� : %d\n", res, a);

	//(double)res = a + b ���׿� �ִ� �����ڴ� ����ȯ�� �Ұ����ϴ�(�ٸ� �޸𸮿����� ħ���� �� �ֱ⶧���� �Ұ����ϴ�)

	return 0;
}