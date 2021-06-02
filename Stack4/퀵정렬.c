//// 퀵 정렬 : 대표적인 분할 정복 알고리즘
//// 정렬이 되어 있지않은 구조에서 사용하면 빠르다.
//// 1. 원소들 중에서 피봇을 고른다.
//// 2. 이 피복을 기준으로 앞에는 작은 값 , 뒤에는 큰값들을 위치시킨다.(분할)
//// 3. 분할된 작은 리스트를 재귀적으로 동작을 시킨다.(정복)
//// 4. 정렬된 작은 리스트들을 결합한다.(결합)
//#include <stdio.h>
//
//void quickSort(int*, int, int);
//
//int main()
//{
//	int ary[] = { 3,5,2,4,7 };
//	int size = sizeof(ary) / sizeof(ary[0]);
//	quickSort(ary, 0, size - 1);
//
//	return 0;
//}
//
//void quickSort(int* pary, int left, int right)
//{
//
//	if (left >= right) return;
//	int pivot = left; // = 0
//	int lleft = pivot + 1; // 1번째방
//	int lright = right; // 마지막방
//	int temp, k;
//
//	while (lleft <= lright) // 교체가 안될때까지 조건을 가지고 진행
//	{
//		while (pary[lleft] <= pary[pivot]) lleft++;   // 작은값이 정렬되었을때 다음으로 이동
//		while (pary[lright] >= pary[pivot] && lright > left) lright--; // 큰값이 정렬되었을때 이동 &&
//
//		if (lleft > lright) // lleft 교체
//		{
//			// 작은 값으로 바뀜
//			temp = pary[lright];
//			pary[lright] = pary[pivot];
//			pary[pivot] = temp;
//		}
//		else
//		{
//			// 값이 바뀌지 않았을때 바꿔줌 
//			temp = pary[lright];
//			pary[lright] = pary[lleft];
//			pary[lleft] = temp;
//		}
//	}
//
//	for (k = 0; k < right + 1; k++) printf("%d ", pary[k]);
//	printf("\n");
//	quickSort(pary, left, lright - 1);
//	quickSort(pary, lright + 1, right);
//
//
//
//}