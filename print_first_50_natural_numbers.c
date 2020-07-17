/**************************************************************************
 * FILE		: print_first_50_natural_numbers().c
 * DESCRIPTION	: Program to print first 50 natural numbers using recursion.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 17/07/2020
 * ***********************************************************************/

#include<stdio.h>

void numPrint(int);

int main()
{
	int n = 1;
	printf("\n\nRecursion : print first 50 natural numbers :\n");
	printf("------------------------------------------------\n");
	printf("The natural numbers are : ");
	numPrint(n);
	printf("\n\n");
	return 0;
}
void numPrint(int n)
{
	if(n<50)
	{
		printf(" %d ",n);
		numPrint(n+1);
	}
}
