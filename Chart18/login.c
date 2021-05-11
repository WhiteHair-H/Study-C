//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
///*
//	로그인 프로그램
//	1. id 와 password 를 저장하고 파일이름은 password.txt로 저장
//	2. 구조체 Login 변수에 id, password 멤버에 각각 저장을 시키고
//	3. 키보드로 입력되는 id와 password 를 비교하여 "로그인되었습니다."
//		또는 "아이디를 찾을수없습니다"라는 메시지출력하는 프로그램 작성
//*/
//
//typedef struct Login
//{
//	char Lid[10];
//	char Lpassword[10];
//}login;
//
//int main()
//{
//	FILE* fp;
//	login lg;
//
//	char id[10];
//	char password[10];
//	/*char* pId;
//	char* pPassword;
//
//	pId = (char*)malloc(sizeof(char) * 10);
//	pPassword = (char*)malloc(sizeof(char) * 10);
//
//	if ((pId == NULL) && (pPassword == NULL))
//	{
//		printf("메모리 할당실패\n");
//		exit(1);
//	}*/
//
//
//	fp = fopen("password.txt", "w");
//	if (fp == NULL)
//	{
//		printf("파일열기 실패\n");
//		return 1;
//	}
//
//	printf("회원가입\n");
//	printf("아이디 : ");
//	scanf("%s", id);
//	printf("비밀번호 : ");
//	scanf("%s", password);
//
//	// 저장되어 있는 아이디와 비밀번호
//	fprintf(fp, "아이디 : %s\n비밀번호 : %s\n", id, password);
//
//	fclose(fp);
//	printf("아이디 : %s , 비밀번호 : %s", id, password);
//
//	
//	
//	while (1)
//	{
//
//		printf("\n==================================\n");
//		printf("로그인 화면\n");
//		printf("아이디 : ");
//		scanf("%s", lg.Lid);
//		printf("비밀번호 : ");
//		scanf("%s", lg.Lpassword);
//		printf("==================================\n");
//
//		if ((strcmp(lg.Lid , id) == 0) && (strcmp(lg.Lpassword, password) == 0))
//		{
//			printf("\n★로그인되었습니다★\n");
//			printf("\n==================================");
//			printf("\n저장 아이디 : %s ,저장 비밀번호 : %s\n", id, password);
//			printf("\n==================================");
//			printf("\n입력 아이디 : %s , 입력 비밀번호 : %s\n", lg.Lid, lg.Lpassword);
//			printf("\n==================================");
//			break;
//		}
//		else
//		{
//			printf("\n아이디 또는 비밀번호가 잘못되었습니다.\n");
//			printf("\n==================================");
//			printf("\n저장 아이디 : %s , 비밀번호 : %s\n", id, password);
//			printf("\n==================================");
//			printf("\n입력 아이디 : %s , 입력 비밀번호 : %s\n", lg.Lid, lg.Lpassword);
//			printf("==================================\n");
//			printf("아이디와 비밀번호를 다시입력해주세요\n");
//		}
//	}
//	
//	printf("\n★환영합니다★\n");
//
//
//
//	return 0;
//}