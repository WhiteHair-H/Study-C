//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 5명의 사원아이디 ,사원이름 , 한달 급여를 입력받아 출력한 뒤
//// 5명의 사원 급여 총액과 평균 급여액을 구하시오.
//// (이름은 동적할당에 저장한다.)
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
//		printf("%d번 사원아이디/사원이름/한달급여를 입력하시오 : ", i);
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
//		//printf("\n사원아이디 : %d , 사원이름 : %s , 한달급여 : %d\n\n", emp.id, pn[i], ps[i]);
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
//	printf("사원아이디  사원이름  한달급여\n");
//	printf("------------------------------\n");
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%5d  %10s  %8d\n\n", emp.id, emp.name, ps[i]);
//	}
//
//	printf("급여총액 : %d , 평균 급여액 : %.1lf\n", total, avg);*/
//
//
//	return 0;
//}