#include<stdio.h>
int main()
{
	int nIterator, nNum1, nNum2, nHCF = 0;
	
	printf("\nEnter the Number 1 and Number 2 :\n");
	scanf("%d%d", &nNum1, &nNum2);

	for(nIterator = 1; nIterator <= nNum1 && nIterator <= nNum2; nIterator++)
	{
		if(nNum1%nIterator == 0 && nNum2%nIterator == 0)
		{
			nHCF = nIterator;
		}
	}
	
	printf("\nThe HCF of %d and %d is : %d\n\n", nNum1, nNum2, nHCF);

	return 0;
}
