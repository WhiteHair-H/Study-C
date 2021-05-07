//#include <stdio.h>
//
//struct student
//{
//	int id; // 메모리가 할당이 되지않았기에 초기화를 할수없음
//	char name[20];
//	double grade;
//};
//
//int main()
//{
//	struct student 
//		s1 = { 315 , "하진우", 2.5 },
//		s2 = { 316, "홍길동", 2.7 },
//		s3 = { 317, "이순신", 3.1 };
//
//	struct student max;
//
//	max = s1;
//	if (s2.grade > max.grade)max = s2;
//	if (s3.grade > max.grade)max = s3;
//
//	printf("학번 : %d\n", max.id);
//	printf("이름 : %s\n", max.name);
//	printf("학점 : %.1lf\n", max.grade);
//
//
//	return 0;
//}