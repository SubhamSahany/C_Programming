#include<stdio.h>
int main()
{
	int nNum, nRemainder, nTemporary, nArmstrong=0;
	
	printf("\nEnter the Number: ");
	scanf("%d", &nNum);

	nTemporary = nNum;	

	while(nNum!=0)
	{
		nRemainder = nNum%10;
		nArmstrong = nArmstrong+(nRemainder*nRemainder*nRemainder);
		nNum = nNum/10;
	}

	if(nArmstrong == nTemporary)
	{
		printf("\n%d is an Armstrong Number.\n\n", nTemporary);
	}
	else
	{
		printf("\n%d is not an Armstrong Number.\n\n", nTemporary);
	}	

	return 0;

}
