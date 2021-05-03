#include <stdio.h>
#include <string.h>

int main()
{
	int num, grade;

	printf("학점입력 : ");
	grade = getchar(); // 엔터값을 문자값으로 인식해서 넘어감
	printf("학번입력 : ");
	scanf("%d", &num);
	//fflush();
	//getchar();
	printf("학번 : %d , 학점 : %c", num, grade);




	return 0;
}