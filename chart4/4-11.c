#include <stdio.h>

int main11()

{
	int a = 10, b = 20;
	int res;

	// �޸������ڴ� ���Կ����ں��� �켱������ ����
	// �����ڿ켱������ �ϱ��������� - �켱������ �ű�� ���ؼ��� ��ȣ���
	res = (++a, ++b); 
	/*res = ++a, ++b;*/

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);
	printf("res:%d\n", res);


	return 0;
}