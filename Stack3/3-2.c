//#include <stdio.h>
//
//int main()
//{
//	int i, n = 0, * ptr; // 일반포인터
//	int sale[2][4] = { {63,84,140,130},{157,209,241,312} };
//	//배열 포인터
//	int (*ppt)[4];
//
//	ppt = sale[0][0];
//	//ptr = &sale[0][0];
//	for (i = 0; i < 8; i++)
//	{
//		// ppt + 1 => 16 증가 -> 행증가
//		printf("\n address %u sale %d = %d", ppt + 1, i, *ppt);
//		ppt++;
//		/*printf("\n address : %u sale %d = %d", ptr, i, *ptr);
//		ptr++;*/
//	}
//
//
//	// printf("\n ptr의 [1][1] -> %d", ptr[1][1]);
//
//
//	return 0;
//}