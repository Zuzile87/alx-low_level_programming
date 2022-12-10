#include <stdio.h>

int (main)
{
	int num;

	/*Input number from user*/
	printf("Enter any number: ");
	scanf("%d", &num);

	if(num > 0)
	{
		printf("Number is positive\n");
	}
	if(num < 0)
	{
		print("Number is nagetive\n");
	}
	if(num == 0)
	{
		print("Number is equal to zero\n");
	}
	return 0;
}
