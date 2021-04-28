#include <stdio.h>


int mainc1()
{
	// 이름 나이 주소

	char name[20];
	int age;
	char add[50];

	printf("이름을 입력하세요.\n");
	scanf("%s", name);
	printf("\n나이를 입력하세요.\n");
	scanf("%d", &age);
	printf("\n주소를 입력하세요.\n");
	scanf("%s", add);

	printf("당신의 이름은 %s이고, 나이는 %d살이며, 주소는 %d입니다.\n", name, age, add);



	return 0;

}