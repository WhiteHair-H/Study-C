#include <stdio.h>

// �������� ���
// ���������� �ƹ������� ����� �� �ֱ⶧���� ������ġ�� �����Ƿ� ����
int a = 10, b = 20;
void swap();
int main()
{
	//int a = 10, b = 20;
	int temp;

	printf("�ٲٱ��� a, b : %d , %d\n", a, b);
	
	swap();
	printf("�ٲ��� a, b : %d , %d\n", a, b);

	return 0;
}

void swap(void)
{	
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}