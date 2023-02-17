#include<stdio.h>
int main()
{
	int nRows, nColumns, nNum;

	printf("Enter the Highest No. of Stars: ");
	scanf("%d", &nNum);
	
	for(nRows = 1; nRows <= nNum; nRows++)
	{
		for(nColumns = 1; nColumns <= nRows; nColumns++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(nRows = nNum-1; nRows >= 1; nRows--)
	{
		for(nColumns = 1; nColumns <= nRows; nColumns++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
