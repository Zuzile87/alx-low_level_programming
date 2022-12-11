#include <stdio.h>
/* more headers goe there */

/* betty style doc for function on maingoes there */
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	printf("Enter the number n: ");
	scanf("%d, &n);
	/* Your code goes there */
	if (n > 0)
		printf('%d is positive\n', n);
	else if (n < 0)
		printf('%d is negative\n', n);
	else (n == 0)
		printf('%d is equal to zero\n', n);

	return (0);
}



