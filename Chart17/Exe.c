//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 5���� ������̵� ,����̸� , �Ѵ� �޿��� �Է¹޾� ����� ��
//// 5���� ��� �޿� �Ѿװ� ��� �޿����� ���Ͻÿ�.
//// (�̸��� �����Ҵ翡 �����Ѵ�.)
//
//typedef struct employee {
//	int id;
//	char* name[10];
//	int* salary[10];
//}employee;
//
//int main()
//{
//	employee emp;
//	int i, j;
//	char temp[80];
//	char* pn = emp.name;
//	int* ps = emp.salary;
//
//	int total = 0;
//	double avg;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%d�� ������̵�/����̸�/�Ѵޱ޿��� �Է��Ͻÿ� : ", i);
//		for (j = 1; j <= 3; j++)
//		{
//			scanf("%d %s %d", &emp.id, &pn[i], &ps[i]);
//			pn[i] = (char*)malloc(strlen(temp) + 1);
//			strcpy(pn[i], temp);
//			//total += ps[i];
//			break;
//		}
//		//avg = total / 5;
//	}
//	for (i = 1; i <= 5; i++)
//	{
//		//printf("\n������̵� : %d , ����̸� : %s , �Ѵޱ޿� : %d\n\n", emp.id, pn[i], ps[i]);
//
//		printf("%s\n", pn[i]);
//	}
//	for (i = 1; i <= 5; i++)
//	{
//		free(pn[i]);
//	}
//
//
//	
//	/*printf("\n");
//	printf("------------------------------\n");
//	printf("������̵�  ����̸�  �Ѵޱ޿�\n");
//	printf("------------------------------\n");
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%5d  %10s  %8d\n\n", emp.id, emp.name, ps[i]);
//	}
//
//	printf("�޿��Ѿ� : %d , ��� �޿��� : %.1lf\n", total, avg);*/
//
//
//	return 0;
//}