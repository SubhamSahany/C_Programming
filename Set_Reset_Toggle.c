#include<stdio.h>
int main()
{
	int nNum = 10;
	int nPosition = 2;
	
	printf("The Set Operation for LSB : %d\n", nNum = nNum|1);
	printf("The Set Operation for nth Bit : %d\n", nNum = nNum|(1<<nPosition));
	printf("The Reset Operation for LSB : %d\n", nNum = nNum&~1);
	printf("The Reset Operation for nth Bit : %d\n", nNum = nNum&~(1<<nPosition));
	printf("The Toggle Operation for LSB : %d\n", nNum = nNum^1);
	printf("The Toggle Operation for nth Bit : %d\n", nNum = nNum^(1<<nPosition));
	return 0;
}
