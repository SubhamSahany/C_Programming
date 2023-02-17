#include<stdio.h>
int main()
{
	int nIterator1, nIterator2, nNumber;

	printf("\nEnter the Number: ");
	scanf("%d", &nNumber);

	

	for(nIterator1 = 1; nIterator1 <= nNumber; nIterator1++)
	{
		printf("\nThe Multiplication Table of %d\n===============================\n\n", nIterator1);

		for(nIterator2 = 1; nIterator2 <= 10; nIterator2++)
		{
			printf("%d x %d = %d\n", nIterator1, nIterator2, nIterator1*nIterator2);
		}

		printf("\n");
	}
	
	return 0;
}
