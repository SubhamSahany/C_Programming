#include<stdio.h>
int main()
{
	int a = 5, b = 3;
	int res = (a=0) || (b=0);
	printf("a = %d b = %d res = %d\n",a,b,res);
	printf("%d\n", !a);
	return 0;
}
