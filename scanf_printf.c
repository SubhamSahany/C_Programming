#include<stdio.h>
int main()
{
	int nNum1;
	printf("Enter the Value of Num1: ");
	scanf("%d", &nNum1);
	printf("The Value of Num1 is : %d \n\n", nNum1);

	int nNum2, nNum3;
	printf("Enter the Value of Num2 and Num3 : \n");
	scanf("%d%d", &nNum2, &nNum3);
	printf("The Value of Num2 is %d and Num3 is %d \n\n", nNum2, nNum3);

	char cChar;
	printf("Enter the Character Value : \n");
	scanf(" %c", &cChar);
	printf("The Value of Char is %c \n\n", cChar);

	float fFloat;
	printf("Enter the Float Value : \n");
	scanf("%f", &fFloat);
	printf("The Value of Float is %f \n\n", fFloat);

	return 0;
}
