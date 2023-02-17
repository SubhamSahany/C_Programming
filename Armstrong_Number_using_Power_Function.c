#include<stdio.h>
#include<math.h>
int main()
{
	int nNum, nRemainder, nTemporary1, nTemporary2, nArmstrong=0, nCount = 0;
	
	printf("\nEnter the Number: ");
	scanf("%d", &nNum);

	nTemporary1 = nNum;
	nTemporary2 = nNum;

	while(nTemporary1!=0)
	{
		++nCount;
		nTemporary1 = nTemporary1/10;
	}	

	while(nNum!=0)
	{
		nRemainder = nNum%10;
		nArmstrong = nArmstrong + pow(nRemainder,nCount);
		nNum = nNum/10;
	}

	if(nArmstrong == nTemporary2)
	{
		printf("\n%d is an Armstrong Number.\n\n", nTemporary2);
	}
	else
	{
		printf("\n%d is not an Armstrong Number.\n\n", nTemporary2);
	}	

	return 0;

}
