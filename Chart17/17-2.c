//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//
//struct profile
//{
//	char name[20];
//	int age;
//	double height;
//	char* intro;
//};
//
//int main()
//{
//	struct profile jin;
//
//	strcpy(jin.name, "진우");
//	jin.age = 17;
//	jin.height = 170.5;
//
//	jin.intro = (char*)malloc(80);
//	printf("자기소개 : ");
//	gets(jin.intro);
//
//	printf("이름 : %s\n", jin.name);
//	printf("나이 : %d\n", jin.age);
//	printf("키 : %.1lf\n", jin.height);
//	printf("자기소개 : %s\n", jin.intro);
//	free(jin.intro);
//
//	return 0;
//}