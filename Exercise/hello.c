#include <stdio.h>

/**
 * main - This prints Hello there
 * Return: It will return zero
 */

int main(void)
{
	int x = 20;
	float y = 3.9;
	char name[] = "Chala Chube";

	printf("My name is %s, I am %d yrs and my GPA is %f.\n", name, x, y);
	printf("The size of int: %ld bytes\n", sizeof(int));
	return (0);
}
