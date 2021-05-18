//#include <stdio.h>
//
//int BSearch(int* pary, int sz, int tg)
//{
//	int first = 0; // size = 10  - first = 0 , last = 9
//	int last = sz - 1;
//	int mid;
//
//	while (first <= last)
//	{
//		mid = (first + last) / 2; // 중요 처음과 마지막을 더한뒤 2로 나눔
//		if (tg == pary[mid]) return mid;
//		else {
//			if (tg > pary[mid]) first = mid + 1; //  타겟이 크면 중간기준 오른쪽 , 
//			else last = mid - 1; // 작으면 왼쪽
//		}
//	}
//	return -1;
//
//}
//
//
//int main()
//{
//	int index;
//	int ary[] = {1,2,3,4,5,6,7,8,9};
//	int size = sizeof(ary) / sizeof(ary[0]);
//
//	index = BSearch(ary, size, 2);
//	if (index == -1) printf("탐색 실패야!\n");
//	else
//	{
//		printf("찾는 값의 주소 -> %d\n", index);
//	}
//
//	return 0;
//}