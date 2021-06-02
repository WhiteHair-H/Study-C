//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//	int num;
//	char name[20];
//	double weight;
//}Fitness;
//Fitness* ary[100];
//
//int count = 0;
//
//int AddMember(Fitness** pary);			// ȸ������Ʈ ����
//void total_number(int count);			// �� ȸ���� ���
//double average_weight(Fitness** pary, int count);	// ��� ������ �� ����
//int max_weight(Fitness** pary, int count);			// �ְ�ü���� ȸ�� �ε����� ����
//void print_info(Fitness** pary, int index);			// ȸ������Ʈ ���
//void free_ary(Fitness** pary, int count);			// �����Ҵ� ����
//
//int main()
//{
//	AddMember(ary);
//	print_info(ary, count);
//	double avg_weight = average_weight(ary, count);
//	int max_index = max_weight(ary, count);
//
//	total_number(count);
//	printf("#���ü�� : %.2lf\n", avg_weight);
//	printf("#�ְ�ü�� ȸ����ȣ : %d\n\t  ȸ���̸� : %s\n\t  ȸ��ü�� : %.2lf\n", ary[max_index]->num, ary[max_index]->name, ary[max_index]->weight);
//
//	free_ary(ary, count);
//
//	return 0;
//}
//
//int AddMember(Fitness** pary) {
//	int MNum;
//	double MWeight;
//	char MName[20];
//	while (1)
//	{
//		if (count > 100)
//		{
//			printf("����� �� �ִ� �ִ�ȸ������ �����Ͽ����ϴ�.");
//			break;
//		}
//
//		pary[count] = malloc(sizeof(Fitness));
//		printf("ȸ�� ��ȣ : ");
//		scanf(" %d", &MNum);
//		if (MNum < 0)
//		{
//			break;
//		}
//		fflush(stdin);
//		printf("�̸� �Է� : ");
//		scanf(" %s", &MName);
//		fflush(stdin);
//		printf("ü�� �Է� : ");
//		scanf(" %lf", &MWeight);
//		fflush(stdin);
//		printf("\n");
//
//		pary[count]->num = MNum;
//		strcpy(pary[count]->name, MName);
//		pary[count]->weight = MWeight;
//
//		count++;
//
//	}
//	return count;
//}
//void total_number(int count)
//{
//	printf("#�� ȸ���� : %d\n", count);
//}
//double average_weight(Fitness** pary, int count)	// ��չ��� ���
//{
//	double total_weight = 0;
//
//	for (int i = 0; i < count; i++)
//	{
//		total_weight += pary[i]->weight;
//	}
//
//	return total_weight / (double)count;
//}
//int max_weight(Fitness** pary, int count)		// �ְ�ü���� ȸ�� �ε����� ��ȯ
//{
//	double max_weight2 = 0;
//	int index = 0;
//
//	for (int i = 0; i < count; i++)
//	{
//		if (max_weight2 < pary[i]->weight)
//		{
//			max_weight2 = pary[i]->weight;
//			index = i;
//		}
//	}
//
//	return index;
//}
//void print_info(Fitness** pary, int index)
//{
//	if (index <= 0)
//	{
//		printf("\n��ϵ� ȸ���� �����ϴ�.");
//		exit(0);
//	}
//	printf("----------------ȸ������Ʈ----------------\n");
//	for (int i = 0; i < index; i++)
//	{
//		printf("ȸ�� ��ȣ : %d\n", pary[i]->num);
//		printf("ȸ�� �̸� : %s\n", pary[i]->name);
//		printf("ȸ�� ü�� : %.2lf\n\n", pary[i]->weight);
//	}
//	printf("------------------------------------------\n");
//}
//void free_ary(Fitness** pary, int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		free(pary[i]);
//	}
//}