#include<stdio.h>
int main()
{
	int nRows, nColumns;

	for(nRows = 1; nRows <= 5; nRows++)
	{
		for(nColumns = 1; nColumns <= 5; nColumns++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
