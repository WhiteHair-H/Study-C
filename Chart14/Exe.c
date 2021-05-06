#include <stdio.h>

void scanf_sub(int(*score)[4]);
void stu_total_avg(int(*score)[4]);
void sub_total_avg(int(*score)[4]);

int main()
{
	int score[5][4];
	int i, j;

	for (i = 1; i < 4; i++)
	{
		printf("\n┌-------------%d반 학생------------┐", i);
		printf("\n│------------과목별 점수----------│\n");
		printf("│                                 │\n");
		printf("│                     과 수 국 영 │\n");
		printf("│                     학 학 어 어 │\n");
		scanf_sub(score);

		printf("\n│--------학생별 총점 및 평균--------\n\n");
		stu_total_avg(score);

		printf("\n│---------과목별 총점 및 평균--------\n\n");
		sub_total_avg(score);
	}
	return 0;
}

// 4과목 입력받기
void scanf_sub(int(*score)[4])
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("│ 4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
}

// 학생별 총점 및 평균
void stu_total_avg(int(*score)[4])
{
	int i, j;
	int total;
	double avg;

	for (i = 0; i < 5; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("학생 %d의 총점 : %d, 평균 : %.2lf\n", i, total, avg);
	}
}

//과목별 총점 및 평균
void sub_total_avg(int(*score)[4])
{
	int i, j;
	int sub_total;
	double sub_avg;

	for (i = 0; i < 4; i++)
	{
		sub_total = 0;
		for (j = 0; j < 5; j++)
		{
			sub_total += score[j][i];
		}
		sub_avg = sub_total / 5.0;
		printf("제%d과목별 총점 : %d , 평균 : %.2lf\n", i, sub_total, sub_avg);
	}
}