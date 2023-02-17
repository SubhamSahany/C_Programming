#include<stdio.h>
int main()
{
	int nNum1 = 6, nNum2 = 50, nNum3 = 100;
	if(nNum1 > nNum2)
	{
		if(nNum1 > nNum3)
		{
			printf("Number 1 is Greater\n");
		}
		else
		{
			printf("Number 3 is Greater\n");
		}	
	}
	else
	{
		if(nNum2 > nNum3)
		{
			printf("Number 2 is Greater\n");
		}
		else
		{
			printf("Number 3 is Greater\n");
		}	
	}
	return 0;
}
