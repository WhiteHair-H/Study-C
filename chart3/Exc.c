#include <stdio.h>


int mainc1()
{
	// �̸� ���� �ּ�

	char name[20];
	int age;
	char add[50];

	printf("�̸��� �Է��ϼ���.\n");
	scanf("%s", name);
	printf("\n���̸� �Է��ϼ���.\n");
	scanf("%d", &age);
	printf("\n�ּҸ� �Է��ϼ���.\n");
	scanf("%s", add);

	printf("����� �̸��� %s�̰�, ���̴� %d���̸�, �ּҴ� %d�Դϴ�.\n", name, age, add);



	return 0;

}