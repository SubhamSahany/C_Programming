#include<stdio.h>
int main()
{
	int nNum, nRows, nColumns;

	printf("Enter the No. of Rows: ");
	scanf("%d", &nNum);

	for(nRows=1; nRows<=nNum; nRows++)
	{
		for(nColumns=1; nColumns<=nRows; nColumns++)
		{
			if(nRows == nNum || nColumns == 1 || nRows == nColumns)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}	
		}

		printf("\n");
	}

	return 0;
}
