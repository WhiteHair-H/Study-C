#include <stdio.h>
#include <string.h>

int main()
{
	int num, grade;

	printf("�����Է� : ");
	grade = getchar(); // ���Ͱ��� ���ڰ����� �ν��ؼ� �Ѿ
	printf("�й��Է� : ");
	scanf("%d", &num);
	//fflush();
	//getchar();
	printf("�й� : %d , ���� : %c", num, grade);




	return 0;
}