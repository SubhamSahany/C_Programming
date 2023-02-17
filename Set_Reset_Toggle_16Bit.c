#include<stdio.h>
int main()
{
	int nNum1;
	printf("Enter the Number: ");
	scanf("%d", &nNum1);
	printf("The Set Operation for %d is : %d\n", nNum1, nNum1|(1<<15));
	printf("The Reset Operation for %d is : %d\n", nNum1, nNum1&(~(1<<15)));
	printf("The Toggle Operation for %d is : %d\n", nNum1, nNum1^(1<<15));
	printf("The Toggle Operation for %d is : %d\n", nNum1, nNum1^(1<<15));
	return 0;
}
