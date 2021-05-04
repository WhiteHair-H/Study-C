//#include <stdio.h>
//
//void auto_func();
//void static_func();
//
//int main()
//{
//	int i;
//
//	printf("일반 지역 변수(auto)를 사용한 함수...\n");
//	for (i = 0; i < 3; i++)
//	{
//		auto_func();
//	}
//
//	printf("정적 지역 변수(static)를 사용한 함수...\n");
//	for (i = 0; i < 3; i++)
//	{
//		static_func();
//	}
//
//
//	return 0;
//}
//
//void auto_func() 
//{
//	auto int a = 0;
//
//	a++;
//	printf("%d\n", a); // 출력후 사라짐
//}
//
//void static_func()
//{
//
//	// static 지역변수
//	static int a; // static 데이터 영역은 메인함수 종료후 같이 사라짐
// 
//	// 읽기는 가능하나, 수정시 함수안에서만 변경가능
// 
//	a++;
//	printf("%d\n", a); // 고정되어 있기때문에 사라지지않음
//}