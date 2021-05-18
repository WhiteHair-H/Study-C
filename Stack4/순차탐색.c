//#include <stdio.h>
//
//int LSearch(int* pary, int sz, int tg)
//{
//	int i;
//
//	for (i = 0; i < sz; i++)
//	{
//		if (tg == pary[i]) return i; // tg 값이 배열에 있으면 i값 반환
//	}
//	return -1; // 아닐경우 -1 반환
//}
//
//int main()
//{
//	int index;
//	int ary[] = { 3, 5 , 8 ,2, 7 ,6, 1 }; // 배열생성
//	int size = sizeof(ary) / sizeof(ary[0]); // 배열 사이즈 생성
//	index = LSearch(ary, size, 9); // 함수 인덱스 저장
//	if (index == -1) printf("찾기실패"); // -1일 경우 찾기 실패
//	else {
//		printf("찾는 값 -> %d", ary[index]);
//	}
//
//	return 0;
//}
//
