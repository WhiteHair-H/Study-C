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
//int AddMember(Fitness** pary);			// 회원리스트 생성
//void total_number(int count);			// 총 회원수 출력
//double average_weight(Fitness** pary, int count);	// 평균 몸무게 값 리턴
//int max_weight(Fitness** pary, int count);			// 최고체중의 회원 인덱스값 리턴
//void print_info(Fitness** pary, int index);			// 회원리스트 출력
//void free_ary(Fitness** pary, int count);			// 동적할당 해제
//
//int main()
//{
//	AddMember(ary);
//	print_info(ary, count);
//	double avg_weight = average_weight(ary, count);
//	int max_index = max_weight(ary, count);
//
//	total_number(count);
//	printf("#평균체중 : %.2lf\n", avg_weight);
//	printf("#최고체중 회원번호 : %d\n\t  회원이름 : %s\n\t  회원체중 : %.2lf\n", ary[max_index]->num, ary[max_index]->name, ary[max_index]->weight);
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
//			printf("등록할 수 있는 최대회원수를 증가하였습니다.");
//			break;
//		}
//
//		pary[count] = malloc(sizeof(Fitness));
//		printf("회원 번호 : ");
//		scanf(" %d", &MNum);
//		if (MNum < 0)
//		{
//			break;
//		}
//		fflush(stdin);
//		printf("이름 입력 : ");
//		scanf(" %s", &MName);
//		fflush(stdin);
//		printf("체중 입력 : ");
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
//	printf("#총 회원수 : %d\n", count);
//}
//double average_weight(Fitness** pary, int count)	// 평균무게 계산
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
//int max_weight(Fitness** pary, int count)		// 최고체중의 회원 인덱스값 반환
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
//		printf("\n등록된 회원이 없습니다.");
//		exit(0);
//	}
//	printf("----------------회원리스트----------------\n");
//	for (int i = 0; i < index; i++)
//	{
//		printf("회원 번호 : %d\n", pary[i]->num);
//		printf("회원 이름 : %s\n", pary[i]->name);
//		printf("회원 체중 : %.2lf\n\n", pary[i]->weight);
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