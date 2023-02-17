#include<stdio.h>
int main()
{
	int nMarks;
	printf("Enter the Marks of the Student : ");
	scanf("%d", &nMarks);
	if(nMarks <= 100 && nMarks >= 90)
	{
		printf("Grade = A\n");
	}
	else if(nMarks < 90 && nMarks >= 80)
	{
		printf("Grade = B\n");
	}
	else if(nMarks < 80 && nMarks >= 70)
	{
		printf("Grade = C\n");
	}
	else if(nMarks < 70 && nMarks >= 60)
	{
		printf("Grade = D\n");
	}
	else if(nMarks < 60 && nMarks > 50)
	{
		printf("Grade = E\n");
	}
	else if(nMarks == 50)
	{
		printf("Grade = F\n");
	}
	else if(nMarks < 50 && nMarks >= 0)
	{
		printf("Grade = Fail\n");
	}
	else
	{
		printf("Invalid Marks! Enter Valid Marks between 0 to 100\n");
	}
	return 0;
}
