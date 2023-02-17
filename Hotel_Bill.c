#include<stdio.h>
int main()
{
	int nFood, nQuantity;
	
	printf("\nWELCOME TO THE HOTEL\n===========================\n\nHere is the Menu:\nItem\t\t\tPrice\n---------------------------------------\n1. Idli\t\t\t Rs. 50\n2. Dosa\t\t\t Rs. 60\n3. Vada\t\t\t Rs. 30\n4. Tea\t\t\t Rs. 10\n5. Coffee\t\t Rs. 10\n\n");

	printf("Select the Food Item:");
	scanf("%d", &nFood);

	switch(nFood)
	{
		case 1: 
			printf("\nEnter the Quantity:");
			scanf("%d", &nQuantity);
			printf("\nTotal Bill : Rs. %d\n\nThank You for Ordering. VISIT AGAIN!!!\n\n", 50*nQuantity);
			break;
		case 2: 
			printf("\nEnter the Quantity:");
			scanf("%d", &nQuantity);
			printf("\nTotal Bill : Rs. %d\n\nThank You for Ordering. VISIT AGAIN!!!\n\n", 60*nQuantity);
			break;
		case 3: 
			printf("\nEnter the Quantity:");
			scanf("%d", &nQuantity);
			printf("\nTotal Bill : Rs. %d\n\nThank You for Ordering. VISIT AGAIN!!!\n\n", 30*nQuantity);
			break;
		case 4: 
			printf("\nEnter the Quantity:");
			scanf("%d", &nQuantity);
			printf("\nTotal Bill : Rs. %d\n\nThank You for Ordering. VISIT AGAIN!!!\n\n", 10*nQuantity);
			break;
		case 5: 
			printf("\nEnter the Quantity:");
			scanf("%d", &nQuantity);
			printf("\nTotal Bill : Rs. %d\n\nThank You for Ordering. VISIT AGAIN!!!\n\n", 10*nQuantity);
			break;
		default:
			printf("\nInvalid Food Item!!! Please enter a valid Option.\n\n");
	}
	return 0;
}
