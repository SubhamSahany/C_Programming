#include<stdio.h>
int main()
{
	int nNum1, nNum2, nNum3, nResult1, nResult2;
	nResult1 = nNum1 = 5, nNum2 = 6, nNum3 = 3, nNum1+nNum2+nNum3;//Comma acts as a Separator
	nResult2 = (nNum1 = 5, nNum2 = 6, nNum3 = 3, nNum1+nNum2+nNum3);
								//Comma acts like an Operator
	printf("Comma as a Separator : %d\n", nResult1);
	printf("Comma as an Operator : %d\n", nResult2);
	return 0;
}
