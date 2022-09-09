#include <stdio.h>

/**
 * main - Prints the letters of the alphabet without q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch >= 'z' && ch != 'q' || 'e'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
