#include<stdio.h>
int main()
{
	int nNum;
	char cChar;

	do
	{
		printf("\nEnter the Number: ");
		scanf("%d", &nNum);

		if(nNum%2==0)
		{
			printf("\n%d is an Even Number\n", nNum);
		}
		else
		{
			printf("\n%d is an Odd Number\n", nNum);
		}
		
		printf("\nDo you want to check for another number???(If Yes, Press Y or y and If No, Press any other key): ");
		scanf(" %c", &cChar);
	}
	while(cChar=='y' || cChar=='Y');

	return 0;
}
