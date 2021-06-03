#include <stdio.h>
//삽입정렬 : 두번째 자료부터 앞 자료를 비교하여 정렬한다

void insertionSort(int* pary, int sz)
{
	int i, j, t, temp;
	printf("\n정렬할 원소 : ");
	for (i = 1; i < sz; i++)
	{
		for (j = i; j > 0; j--) // 정렬 대상 원소의 인덱스 i를 j에 저장
		{
			if (pary[j] < pary[j - 1]) { // 기본값과 이전값을 비교
				// swap 함수 이용
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}
		printf("\n %d단계 : ", i);
		for (t = 0; t < sz; t++)
		{
			printf("%3d", pary[t]);
		}
	}

}

void print(int* pary, int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("ary[%d] = %d ", i, pary[i]);
	}
}

int main()
{
	int ary[] = { 4,2,7,5,9,1,8,3,6 };
	int size = sizeof(ary) / sizeof(ary[0]);
	insertionSort(ary, size);
	//print(ary, size);

	return 0;
}