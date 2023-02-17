#include<stdio.h>
int main()
{
	int nFood, nQuantity, nFinal_Bill = 0, nCount1 = 0, nCount2 = 0, nCount3 = 0, nCount4 = 0, nCount5 = 0;
	char cCheck;
	
	printf("\n=====================\nWELCOME TO THE HOTEL\n=====================\n");

	do
	{
		printf("\nMENU\n------\n\nItem\t\t\tPrice\n--------------------------------\n1. Idli\t\t\t Rs. 50/-\n2. Dosa\t\t\t Rs. 60/-\n3. Vada\t\t\t Rs. 30/-\n4. Tea\t\t\t Rs. 10/-\n5. Coffee\t\t Rs. 10/-\n");

		printf("\nSelect the Food Item: ");
		scanf("%d", &nFood);

		switch(nFood)
		{
			case 1: 
				printf("\nEnter the Quantity: ");
				scanf("%d", &nQuantity);
				nCount1 += nQuantity;
				printf("\nTotal Bill : Rs. %d/-\n", 50*nQuantity);
				break;
			case 2: 
				printf("\nEnter the Quantity: ");
				scanf("%d", &nQuantity);
				nCount2 += nQuantity;
				printf("\nTotal Bill : Rs. %d/-\n", 60*nQuantity);
				break;
			case 3: 
				printf("\nEnter the Quantity: ");
				scanf("%d", &nQuantity);
				nCount3 += nQuantity;
				printf("\nTotal Bill : Rs. %d/-\n", 30*nQuantity);
				break;
			case 4: 
				printf("\nEnter the Quantity: ");
				scanf("%d", &nQuantity);
				nCount4 += nQuantity;
				printf("\nTotal Bill : Rs. %d/-\n", 10*nQuantity);
				break;
			case 5: 
				printf("\nEnter the Quantity: ");
				scanf("%d", &nQuantity);
				nCount5 += nQuantity;
				printf("\nTotal Bill : Rs. %d/-\n", 10*nQuantity);
				break;
			default:
				printf("\nInvalid Food Item!!! Please enter a valid Option.\n");
				break;
		}

		printf("\nDo you want to Order More???(If Yes, Press Y or y and If No, Press any other key): ");
		scanf(" %c", &cCheck);
	}
	while(cCheck=='y' || cCheck=='Y');

	nFinal_Bill = (nCount1 * 50) + (nCount2 * 60) + (nCount3 * 30) + (nCount4 * 10) + (nCount5 * 10);
	printf("\nFinal Bill : Rs. %d/-\n\nThank You for Ordering. VISIT AGAIN!!!\n", nFinal_Bill);

	printf("\n");

	return 0;
}
