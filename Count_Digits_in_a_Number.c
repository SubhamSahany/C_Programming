#include<stdio.h>
int main()
{
	int nNum, nCount=0;
	
	printf("\nEnter the Number: ");
	scanf("%d", &nNum);

	while(nNum!=0)
	{
		nCount++;
		nNum = nNum/10;
	}

	printf("\nThe No. of Digits in Number = %d\n\n", nCount);
	return 0;
}
