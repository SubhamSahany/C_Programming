#include<stdio.h>
int main()
{
	int nNum, nRows, nColumns, nStars;
	
	printf("Enter the No. of Rows: ");
	scanf("%d", &nNum);

	for(nRows = 1; nRows <= nNum; nRows++)
	{
		for(nColumns = 1; nColumns <= nNum-nRows; nColumns++)
		{
			printf(" ");
		}
		for(nStars = 1; nStars <= 2*nRows-1; nStars++)
		{
			printf("*");
		}

		printf("\n");
	}

	for(nRows = nNum-1; nRows >= 1; nRows--)
	{
		for(nColumns = 1; nColumns <= nNum-nRows; nColumns++)
		{
			printf(" ");
		}
		for(nStars = 1; nStars <= 2*nRows-1; nStars++)
		{
			printf("*");
		}

		printf("\n");
	}


	return 0;
}
