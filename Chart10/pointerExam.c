//date : 2021-04-30
//Author : ÇÏÁø¿ì

#include <stdio.h>

int swap_ary(int num1, int num2);

int main() {

	int ary[10];
	int* pa = ary;
	int size = sizeof(ary) / sizeof(ary[0]);

	printf
	scanf("%d", size);

	/*int num1, num2;

	scanf_s("%d %d", &num1, &num2);
	swap_ary(&num1, &num2);
	printf("%d %d \n", num1, num2);

	return 0;*/

}

int swap_ary(int* num1, int* num2) {
	int temp = 0;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	return 0;
}