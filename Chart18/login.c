//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
///*
//	�α��� ���α׷�
//	1. id �� password �� �����ϰ� �����̸��� password.txt�� ����
//	2. ����ü Login ������ id, password ����� ���� ������ ��Ű��
//	3. Ű����� �ԷµǴ� id�� password �� ���Ͽ� "�α��εǾ����ϴ�."
//		�Ǵ� "���̵� ã���������ϴ�"��� �޽�������ϴ� ���α׷� �ۼ�
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
//		printf("�޸� �Ҵ����\n");
//		exit(1);
//	}*/
//
//
//	fp = fopen("password.txt", "w");
//	if (fp == NULL)
//	{
//		printf("���Ͽ��� ����\n");
//		return 1;
//	}
//
//	printf("ȸ������\n");
//	printf("���̵� : ");
//	scanf("%s", id);
//	printf("��й�ȣ : ");
//	scanf("%s", password);
//
//	// ����Ǿ� �ִ� ���̵�� ��й�ȣ
//	fprintf(fp, "���̵� : %s\n��й�ȣ : %s\n", id, password);
//
//	fclose(fp);
//	printf("���̵� : %s , ��й�ȣ : %s", id, password);
//
//	
//	
//	while (1)
//	{
//
//		printf("\n==================================\n");
//		printf("�α��� ȭ��\n");
//		printf("���̵� : ");
//		scanf("%s", lg.Lid);
//		printf("��й�ȣ : ");
//		scanf("%s", lg.Lpassword);
//		printf("==================================\n");
//
//		if ((strcmp(lg.Lid , id) == 0) && (strcmp(lg.Lpassword, password) == 0))
//		{
//			printf("\n�ڷα��εǾ����ϴ١�\n");
//			printf("\n==================================");
//			printf("\n���� ���̵� : %s ,���� ��й�ȣ : %s\n", id, password);
//			printf("\n==================================");
//			printf("\n�Է� ���̵� : %s , �Է� ��й�ȣ : %s\n", lg.Lid, lg.Lpassword);
//			printf("\n==================================");
//			break;
//		}
//		else
//		{
//			printf("\n���̵� �Ǵ� ��й�ȣ�� �߸��Ǿ����ϴ�.\n");
//			printf("\n==================================");
//			printf("\n���� ���̵� : %s , ��й�ȣ : %s\n", id, password);
//			printf("\n==================================");
//			printf("\n�Է� ���̵� : %s , �Է� ��й�ȣ : %s\n", lg.Lid, lg.Lpassword);
//			printf("==================================\n");
//			printf("���̵�� ��й�ȣ�� �ٽ��Է����ּ���\n");
//		}
//	}
//	
//	printf("\n��ȯ���մϴ١�\n");
//
//
//
//	return 0;
//}