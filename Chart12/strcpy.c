#include <stdio.h>
#include <string.h>


char my_strcpy(char* str1, char* str2);

int main()
{
	char str1[80];
	char str2[80];

	printf("���� : ");
	scanf("%s", &str1);
	printf("���� : ");
	scanf("%s", &str2);
	printf("���� �ܾ� : %s , ������ �ܾ� : %s\n", str1, str2);

	my_strcpy(str1, str2);
	printf("����� �ܾ� : %s", str1);




	return 0;
}

char my_strcpy(char* str1, char* str2)
{

	char *str3 = str1;

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';



	return str3;
}