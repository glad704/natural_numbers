/**************************************************************************
 * FILE		: calculate_sum_of_numbers_from_1_to_n().c
 * DESCRIPTION	: Program to calculate the sum of numbers from 1 to n.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 17/07/2020
 * ***********************************************************************/

#include<stdio.h>

int main()
{
	int n1;
	int sum;
	printf("\n\nRecursion : Calculate the sum of numbers from 1 to n :\n");
	printf("----------------------------------------------------------\n");
	printf("Input the last number of the range starting from 1 : ");
	scanf("%d",&n1);
	sum = sumOfRange(n1);
	printf("The sum of numbers from 1 to %d : %d\n\n",n1,sum);
	return (0);
}

