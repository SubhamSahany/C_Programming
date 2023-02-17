#include<stdio.h>
int main()
{
	int nNum, nTemporary, nRemainder, nSum=0;

	printf("\nEnter the Number: ");
	scanf("%d", &nNum);

	nTemporary=nNum;

	while(nNum!=0)
	{
		nRemainder = nNum%10;
		nSum = nSum+nRemainder;
		nNum = nNum/10;
	}

	printf("\nThe Sum of the Digits of %d is: %d\n\n", nTemporary, nSum);

	return 0;
}
