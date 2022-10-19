#include "main.h"

/**
 * _islower - returns 1 if an alphabet is lower case
 * @c: the character to check
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
