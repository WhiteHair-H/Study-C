//// 선택정렬 : 0번방을 최소값이라고 가정한다.
//// 나머지 원소들과 비교하여 교환한다.
//#include <stdio.h>
//
//void SelectionSort(int* pary, int sz)
//{
//	int i, j, t, temp; // 변수선언
//	for (i = 0; i < sz - 1; i++) 
//	{
//		int min = i; // 기준 위치 원소의 인덱스 i를 변수 min에 설정
//		// i번 원소부터 마지막 원소까지 비교하면서 가장 작은 원소의 인덱스를 변수 min에 저장한다.
//		for (j = i + 1; j < sz; j++)
//		{
//			if (pary[min] > pary[j]) min = j;
//		}
//		// 스왑함수 서로 교환
//		temp = pary[min];
//		pary[min] = pary[i];
//		pary[i] = temp;
//		printf("\n 단계 %d : ", i + 1);
//		// 한 단계의 삽입 정렬이 끝난 현재 상태를 출력
//		// 다음 삽입 정렬을 수행하기 위해 기준 위치인덱스 i를 하나 증가시킴
//		for (t = 0; t < sz; t++)
//		{
//			printf("%3d", pary[t]);
//		}
//	}
//
//
//}
//
//int main()
//{
//	int ary[] = { 25,75,23,5,19,23,34,85,17 };
//	int size = sizeof(ary) / sizeof(ary[0]);
//	SelectionSort(ary, size);
//
//	return 0;
//}