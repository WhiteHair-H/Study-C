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
//int total_number(int count);					  // 전체 등록 회원 수 반환
//double average_weight(Fitness** pary, int count); // 평균 체중 반환
//int max_weight(Fitness** pary, int count);		  // 최대 체중 회원 index 반환
//void print_info(Fitness** pary, int index);       // 회원 정보 출력
//void free_ary(Fitness** pary, int count);		  // 동적할당 영역 해제
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
//	printf("------------회원------------\n");
//	printf("# 총 회원 수 : %d\n", count);
//	printf("# 평균 체중 : %.1lf\n", avgWeight);
//	printf("# 체중이 가장 무거운 회원은? \n회원번호 : %d\n회원이름 : %s\n회원몸무게 : %lf\n" , ary[index]->num , ary[index]->name , ary[index]->weight);
//
//	free_ary(ary, count);
//
//	return 0;
//}
//
//int total_number(Fitness ** pary)
//{
//	int count = 0;
//	// 회원정보입력
//	for (int i = 0; i < 100; i++)
//	{
//		int userNum;
//		char userName[20];
//		double userWeight;
//
//		printf("회원 번호 : ");
//		scanf("%d", &userNum);
//
//		if (userNum < 0) break;
//
//		printf("이름 입력 : ");
//		scanf(" %s", &userName);
//		fflush(stdin);
//
//		printf("체중 입력 : ");
//		scanf("%lf", &userWeight);
//
//		// 동적 할당
//		pary[i] = (Fitness*)malloc(sizeof(Fitness));
//		if (pary == NULL)
//		{
//			printf("메모리 공간 부족!!");
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
//	printf("------------회원리스트------------\n");
//	for (int i = 0; i < index; i++)
//	{
//		printf("회원 번호 : %d\n", pary[i]->num);
//		printf("이름 : %s\n", pary[i]->name);
//		printf("체중 : %.1lf\n", pary[i]->weight);
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