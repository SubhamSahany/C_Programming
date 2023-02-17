#include<stdio.h>
int main()
{
	int nNum1 = 4, nNum2 = 9;
	
	if(nNum1 > nNum2)
	{
		printf("Number 1 is Greater than Number 2\n");
	}
	else
	{
		printf("Number 2 is Greater than or Equal to Number 1\n");
	}

	if(nNum1 >= nNum2)
	{
		printf("Number 1 is Greater than or Equal to Number 2\n");
	}
	else
	{
		printf("Number 2 is Greater than Number 1\n");
	}

	if(nNum1 < nNum2)
	{
		printf("Number 1 is Lesser than Number 2\n");
	}
	else
	{
		printf("Number 2 is Lesser than or Equal to Number 1\n");
	}

	if(nNum1 <= nNum2)
	{
		printf("Number 1 is Lesser than or Equal to Number 2\n");
	}
	else
	{
		printf("Number 2 is Lesser than Number 1\n");
	}

	if(nNum1 == nNum2)
	{
		printf("Number 1 is Equal to Number 2\n");
	}
	else
	{
		printf("Number 1 and Number 2 are not Equal\n");
	}

	if(nNum1 != nNum2)
	{
		printf("Number 1 is not Equal to Number 2\n");
	}
	else
	{
		printf("Number 1 and Number 2 are Equal\n");
	}

	return 0;
}
