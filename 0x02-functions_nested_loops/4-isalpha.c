#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *@c: is c an integer argument
 *
 * Returns 1 if c is a letter, lowercase or uppercase 
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
