//#include <stdio.h>
//
//union student
//{
//	// ����ü ���
//	int num;
//	double grade;
//};
//
//struct student1
//{
//	int num;
//	double grade;
//};
//
//
//
//int main()
//{
//	// ����ü ������ ���� ū ������ �޸� �Ҵ�
//	// ù��° ����� �ʱ�ȭ ����
//	union student s1 = { 3.14 };
//
//	struct student1 s2;
//
//	//printf("�й� : %d\n", s1.num);
//	//s1.grade = 4.4;
//	printf("���� : %.1lf\n", s1.grade);
//	// �ѹ��� �����ؾ� ���� ����� ����
//	// s1.num = 315;
//	printf("�й� : %d\n", s1.num);
//	printf("%d\n", sizeof(s1));
//
//	printf("%d\n", sizeof(s2));
//
//
//
//	return 0;
//}