//#include <stdio.h>
//
//union student
//{
//	// 공용체 멤버
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
//	// 공용체 설계후 가장 큰 변수에 메모리 할당
//	// 첫번째 멤버만 초기화 가능
//	union student s1 = { 3.14 };
//
//	struct student1 s2;
//
//	//printf("학번 : %d\n", s1.num);
//	//s1.grade = 4.4;
//	printf("학점 : %.1lf\n", s1.grade);
//	// 한번더 선언해야 값이 제대로 나옴
//	// s1.num = 315;
//	printf("학번 : %d\n", s1.num);
//	printf("%d\n", sizeof(s1));
//
//	printf("%d\n", sizeof(s2));
//
//
//
//	return 0;
//}