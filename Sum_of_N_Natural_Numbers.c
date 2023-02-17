#include<stdio.h>
int main()
{
	int nIterator, nNumber, nSum = 0;
	printf("\nEnter the Total Natural Numbers:");
	scanf("%d", &nNumber);
	for(nIterator = 1; nIterator <= nNumber; nIterator++)
	{
		nSum = nSum + nIterator;
	}
	printf("\nSum of %d Natural Numbers is : %d\n\n", nNumber, nSum);
	return 0;
}
