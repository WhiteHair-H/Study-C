//#include <stdio.h>
//
//struct student
//{
//	int id; // �޸𸮰� �Ҵ��� �����ʾұ⿡ �ʱ�ȭ�� �Ҽ�����
//	char name[20];
//	double grade;
//};
//
//int main()
//{
//	struct student 
//		s1 = { 315 , "������", 2.5 },
//		s2 = { 316, "ȫ�浿", 2.7 },
//		s3 = { 317, "�̼���", 3.1 };
//
//	struct student max;
//
//	max = s1;
//	if (s2.grade > max.grade)max = s2;
//	if (s3.grade > max.grade)max = s3;
//
//	printf("�й� : %d\n", max.id);
//	printf("�̸� : %s\n", max.name);
//	printf("���� : %.1lf\n", max.grade);
//
//
//	return 0;
//}