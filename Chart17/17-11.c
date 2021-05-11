//#include <stdio.h>
//
//enum season {SPRING, SUMMER, FALL /*= 100*/, WINTER};
//
//
//int main()
//{
//	enum season ss;
//	char* pc = NULL;
//	enum season s3;
//
//	ss = SPRING;
//	switch (ss)
//	{
//	case SPRING:
//		pc = "inline";
//		break;
//	case SUMMER:
//		pc = "swimming";
//		break;
//	case FALL:
//		pc = "trip";
//		break;
//	case WINTER:
//		pc = "skiing";
//		break;
//	}
//	printf("나의 레저 활동 = > %s\n", pc);
//
//	printf("크기 : %d\n", sizeof(s3));
//	// 초기화를 시켜주지않으면 정수화
//	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER);
//	return 0;
//}