#include<stdio.h>
int main()
{
	int nYear;

	printf("Enter the Year : \n");
	scanf("%d", &nYear);

	if(nYear % 400 == 0)
	{
		printf("%d is a Leap Year.\n", nYear);
	}	
	else if(nYear % 100 == 0)
	{
		printf("%d is not a Leap Year.\n", nYear);
	}
	else if(nYear % 4 == 0)
	{
		printf("%d is a Leap Year.\n", nYear);
	}
	else
	{
		printf("%d is not a Leap Year.\n", nYear);
	}
	return 0;
}
