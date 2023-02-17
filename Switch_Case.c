#include<stdio.h>
int main()
{
	char cOperation;
	int nNum1, nNum2;
	
	printf("Enter a Operation:");
	scanf("%c", &cOperation);

	printf("Enter the Number 1 and Number 2:");
	scanf("%d%d", &nNum1, &nNum2);

	switch(cOperation)
	{
	case '+' :
		printf("Sum of Number 1 and Number 2 is : %d\n", 									nNum1+nNum2);
		break;
		
	case '-' :
		printf("Difference of Number 1 and Number 2 is : %d\n", 								nNum1-nNum2);
		break;
		
	case '*' :
		printf("Product of Number 1 and Number 2 is : %d\n", 									nNum1*nNum2);
		break;

	case '/' :
		printf("Division of Number 1 and Number 2 is : %d\n", 									nNum1/nNum2);
		break;

	case '%' :
		printf("Remainder of Number 1 and Number 2 is : %d\n", 									nNum1%nNum2);
		break;

	default :
		printf("Invalid Operation!!!\n");
	}
	return 0;
}
