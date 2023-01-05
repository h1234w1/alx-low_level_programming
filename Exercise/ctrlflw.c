#include <stdio.h>

/**
 * main - controls flow
 * Return: Returns 0
 */

int main(void)
{
	int y, z;

	printf("Guess a number between 15 and 30:\n");
	scanf("%d", &y);
	printf("Guess a number between 1 and 12:\n");
	scanf("%d", &z);

	if (z < 5)
	{
		printf("We will get married in Meskerem, 20%d. Yesss!\n", y);
	}
	else if (z >= 5 && z <= 10)
	{
		printf("We will get married in Ginbot, 20%d. Dersual!\n", y);
	}
	else
	{
		printf("We will get married in Hamle, 20%d. Get ready!\n", y);
	}
	return (0);
}

