#include<stdio.h>
int main()
{
	float fPrincipalAmount;
	int nTimePeriod;
	float fInterestRate;
	printf("Enter the Principal Amount : ");
	scanf("%f", &fPrincipalAmount);
	printf("Enter the Time Period : ");
	scanf("%d", &nTimePeriod);
	printf("Enter the Interest Rate : ");
	scanf("%f", &fInterestRate);
	printf("The Interest is : %f\n", (fPrincipalAmount*fInterestRate*nTimePeriod)/100);
	return 0;
}
