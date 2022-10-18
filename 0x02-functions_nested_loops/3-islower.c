#include "main.h"

/**
 * _islower - Checks if a character is in lowercase.
 * @c: The character is to be checked.
 *
 * Return: 1 if charcater is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
