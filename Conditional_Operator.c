#include<stdio.h>
int main()
{
	int nNum1 = 60;
	int nNum2 = 500;
	int nNum3 = 40;
	(nNum1>nNum2)&&(nNum1>nNum3)?printf("Num1 is Greater\n"):
			(nNum2>nNum3)?printf("Num2 is Greater\n"):printf("Num3 is Greater\n");
	return 0;
}
