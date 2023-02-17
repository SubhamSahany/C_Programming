#include<stdio.h>
int main()
{
	int nIterator, nNumber, nFactorial=1;
	
	printf("\nEnter the Number:");
	scanf("%d", &nNumber);

	for(nIterator = nNumber; nIterator >= 1; nIterator--)
	{
		nFactorial = nIterator * nFactorial;
	}
	printf("\nFactorial of %d is : %d\n\n", nNumber, nFactorial);
	return 0;
}
