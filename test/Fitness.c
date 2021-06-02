//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//	int num;
//	char name[20];
//	double weight;
//}Fitness;
//
//int total_number(int count);					  // ��ü ��� ȸ�� �� ��ȯ
//double average_weight(Fitness** pary, int count); // ��� ü�� ��ȯ
//int max_weight(Fitness** pary, int count);		  // �ִ� ü�� ȸ�� index ��ȯ
//void print_info(Fitness** pary, int index);       // ȸ�� ���� ���
//void free_ary(Fitness** pary, int count);		  // �����Ҵ� ���� ����
//
//int main()
//{
//	Fitness* ary[100];
//	int count = 0;
//
//	count = total_number(ary);
//	print_info(ary, count);
//
//	double avgWeight = average_weight(ary, count);
//	
//	int index = max_weight(ary, count);
//	
//	printf("------------ȸ��------------\n");
//	printf("# �� ȸ�� �� : %d\n", count);
//	printf("# ��� ü�� : %.1lf\n", avgWeight);
//	printf("# ü���� ���� ���ſ� ȸ����? \nȸ����ȣ : %d\nȸ���̸� : %s\nȸ�������� : %lf\n" , ary[index]->num , ary[index]->name , ary[index]->weight);
//
//	free_ary(ary, count);
//
//	return 0;
//}
//
//int total_number(Fitness ** pary)
//{
//	int count = 0;
//	// ȸ�������Է�
//	for (int i = 0; i < 100; i++)
//	{
//		int userNum;
//		char userName[20];
//		double userWeight;
//
//		printf("ȸ�� ��ȣ : ");
//		scanf("%d", &userNum);
//
//		if (userNum < 0) break;
//
//		printf("�̸� �Է� : ");
//		scanf(" %s", &userName);
//		fflush(stdin);
//
//		printf("ü�� �Է� : ");
//		scanf("%lf", &userWeight);
//
//		// ���� �Ҵ�
//		pary[i] = (Fitness*)malloc(sizeof(Fitness));
//		if (pary == NULL)
//		{
//			printf("�޸� ���� ����!!");
//			exit(1);
//		}
//		pary[i]->num = userNum;
//		strcpy(pary[i]->name, userName);
//		pary[i]->weight = userWeight;
//		count++;
//
//	}
//	return count;
//}
//
//
//double average_weight(Fitness** pary, int count)
//{
//	double avgweight = 0;
//
//	for (int i = 0; i < count; i++)
//	{
//		avgweight += pary[i]->weight;
//	}
//	return avgweight / count;
//}
//
//int max_weight(Fitness** pary, int count)
//{
//	int index = 0;
//
//	for (int i = 0; i < count; i++)
//	{
//		if (pary[i]->weight > pary[index]->weight)
//		{
//			index = i;
//		}
//	}
//	return index;
//}
//
//void print_info(Fitness** pary, int index)
//{
//	printf("------------ȸ������Ʈ------------\n");
//	for (int i = 0; i < index; i++)
//	{
//		printf("ȸ�� ��ȣ : %d\n", pary[i]->num);
//		printf("�̸� : %s\n", pary[i]->name);
//		printf("ü�� : %.1lf\n", pary[i]->weight);
//	}
//}
//
//void free_ary(Fitness** pary, int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		free(pary[i]);
//	}
//
//}