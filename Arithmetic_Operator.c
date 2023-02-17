#include<stdio.h>
int main()
{
	int nNum1, nNum2;
	printf("Enter the Num1 and Num2 :\n");
	scanf("%d%d", &nNum1, &nNum2);
	printf("The Sum is : %d\n", nNum1+nNum2);
	printf("The Difference is : %d\n", nNum1-nNum2);
	printf("The Multiplication is : %d\n", nNum1*nNum2);
	printf("The Division is : %d\n", nNum1/nNum2);
	printf("The Remainder is : %d\n", nNum1%nNum2);
	return 0;
}
