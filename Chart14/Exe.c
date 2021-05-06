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
		printf("\n��-------------%d�� �л�------------��", i);
		printf("\n��------------���� ����----------��\n");
		printf("��                                 ��\n");
		printf("��                     �� �� �� �� ��\n");
		printf("��                     �� �� �� �� ��\n");
		scanf_sub(score);

		printf("\n��--------�л��� ���� �� ���--------\n\n");
		stu_total_avg(score);

		printf("\n��---------���� ���� �� ���--------\n\n");
		sub_total_avg(score);
	}
	return 0;
}

// 4���� �Է¹ޱ�
void scanf_sub(int(*score)[4])
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("�� 4������ ���� �Է� : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
}

// �л��� ���� �� ���
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
		printf("�л� %d�� ���� : %d, ��� : %.2lf\n", i, total, avg);
	}
}

//���� ���� �� ���
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
		printf("��%d���� ���� : %d , ��� : %.2lf\n", i, sub_total, sub_avg);
	}
}