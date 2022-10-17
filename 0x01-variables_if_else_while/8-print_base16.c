#include <stdio.h>

/**
 * main - Prints all the numbers of bse 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar('\n');

	return (0);
}
