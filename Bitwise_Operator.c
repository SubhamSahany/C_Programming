#include<stdio.h>
int main()
{
	int nNum1, nNum2;
	printf("Enter the Num1 and Num2 :\n");
	scanf("%d%d", &nNum1, &nNum2);
	printf("The Bitwise AND is : %d\n", nNum1&nNum2);
	printf("The Bitwise OR is : %d\n", nNum1|nNum2);
	printf("The Bitwise EX-OR is : %d\n", nNum1^nNum2);
	printf("The Negation of Num1 is : %d\n", ~nNum1);
	printf("The Negation of Num2 is : %d\n", ~nNum2);
	return 0;
}
