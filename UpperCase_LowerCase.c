#include<stdio.h>
int main()
{
	char cCharacter;

	printf("Enter the Character :");
	scanf("%c", &cCharacter);

	if(cCharacter >= 'a' && cCharacter <= 'z')
	{
		printf("The Character is in Lowercase.\n");
	}
	else if(cCharacter >= 'A' && cCharacter <= 'Z')
	{
		printf("The Character is in Uppercase.\n");
	}
	else
	{
		printf("Invalid Character!!! Enter a Valid Character.\n");
	}
	return 0;
}
