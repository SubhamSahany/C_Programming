#include<stdio.h>
int main()
{
	int nRemainder, nIterator;
	long lNum;

	printf("\nEnter the Number: ");
	scanf("%ld", &lNum);

	printf("\nThe Prime Numbers in %ld are : ", lNum);

	while (lNum>0)
	{
		nRemainder = lNum % 10;
		lNum /= 10;
	
		if(nRemainder == 2 || nRemainder == 3 || nRemainder == 5 || nRemainder == 7 )
		{
			printf("%d ", nRemainder);
		}
	}

	printf("\n\n");

	return 0;
}
