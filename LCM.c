#include<stdio.h>
int main()
{
	int nIterator, nNum1, nNum2, nQuotient1, nQuotient2, nLCM = 0;
	
	printf("\nEnter the Number 1 and Number 2 :\n");
	scanf("%d%d", &nNum1, &nNum2);

	for(nIterator = 1; nIterator <= nNum1 && nIterator <= nNum2; nIterator++)
	{
		if(nNum1%nIterator == 0 && nNum2%nIterator == 0)
		{
			nQuotient1 = nNum1/nIterator;
			nQuotient2 = nNum2/nIterator;
			nLCM = nIterator*nQuotient1*nQuotient2;
		}
	}
	
	printf("\nThe LCM of %d and %d is : %d\n\n", nNum1, nNum2, nLCM);

	return 0;
}
