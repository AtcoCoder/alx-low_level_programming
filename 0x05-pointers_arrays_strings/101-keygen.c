#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <main.h>

/**
 * main - generates keygen.
 * Return: 0 Always
 */
int main(void)
{
	char seed[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char password[15];
	int i, n, passw, compem;

	srand(time(0));
	for (i = 0; passw < 2772; i++)
	{
		n = rand() % 10;
		password[i] = seed[n];
		passw += password[i];
	}
	complem = 2772 - passw;
	password[i] = complem;
	printf("%s\n", password);
	return (0);
}
