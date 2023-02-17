#include<stdio.h>
int main()
{
	int nNum, nRows, nColumns, nStars;
	
	printf("Enter the No. of Rows: ");
	scanf("%d", &nNum);

	for(nRows = nNum; nRows >= 1; nRows--)
	{
		for(nColumns = 1; nColumns <= nNum-nRows; nColumns++)
		{
			printf(" ");
		}
		for(nStars = 1; nStars <= nRows; nStars++)
		{
			printf("* ");
		}

		printf("\n");
	}

	return 0;
}
