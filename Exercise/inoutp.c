#include <stdio.h>

/**
 * main - This prints Hello there
 * Return: It will return zero
 */

int main(void)
{
	int x;

	printf("Enter the value of X:\n");
	x = getchar();

	printf("\nThe value you entered is: ");
	putchar(x);
	putchar('\n');
	
	return (0);
}
