#include<stdio.h>
int main()
{
	int nNum, nRemainder, nTemporary, nReverse=0;
	
	printf("\nEnter the Number: ");
	scanf("%d", &nNum);

	nTemporary = nNum;	

	while(nNum!=0)
	{
		nRemainder = nNum%10;
		nReverse = nReverse*10+nRemainder;
		nNum = nNum/10;
	}

	printf("\nThe Reverse Number of %d = %d\n\n", nTemporary, nReverse);

	if(nReverse == nTemporary)
	{
		printf("%d is a Palindrome Number.\n\n", nTemporary);
	}
	else
	{
		printf("%d is not a Palindrome Number.\n\n", nTemporary);
	}	

	return 0;
}
