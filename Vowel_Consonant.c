#include<stdio.h>
int main()
{
	char cCharacter;
	printf("Enter the Character:");
	scanf("%c", &cCharacter);

	switch(cCharacter)
	{
		case 'a':
			printf("The Character is a Vowel.\n");
			break;
		case 'A':
			printf("The Character is a Vowel.\n");
			break;
		case 'e':
			printf("The Character is a Vowel.\n");
			break;
		case 'E':
			printf("The Character is a Vowel.\n");
			break;
		case 'i':
			printf("The Character is a Vowel.\n");
			break;
		case 'I':
			printf("The Character is a Vowel.\n");
			break;
		case 'o':
			printf("The Character is a Vowel.\n");
			break;
		case 'O':
			printf("The Character is a Vowel.\n");
			break;
		case 'u':
			printf("The Character is a Vowel.\n");
			break;
		case 'U':
			printf("The Character is a Vowel.\n");
			break;
		default:
			printf("The Character is a Consonant.\n");
			break;
	}
	return 0;
}
