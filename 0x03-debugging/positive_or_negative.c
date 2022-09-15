#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * @i: integer
 * Return: 0
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i == 0)
	{
		printf("%d is zero", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	printf("\n");
}
