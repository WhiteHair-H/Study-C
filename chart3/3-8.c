#include <stdio.h>


int main8() 
{
	int income = 0;
	double tax;
	const double tax_rate = 0.16;

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다. \n", tax);


	/*int t;

	printf("/d", t);*/


	return 0;
}