#include "main.h"

/**
 * isupper - function that verifie
 * @c: tested character
 * Return: returns success
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
