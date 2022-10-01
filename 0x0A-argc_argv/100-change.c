#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{
	int cents, ncoins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cent -= 25;
		else if (cents >= 10)
			cent -= 10;
		else if (cents >= 5)
			cent -= 5;
		else if (cents >= 2)
			cent -= 2;
		else if (cents >= 1)
			cent -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
