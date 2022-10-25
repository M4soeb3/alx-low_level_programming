#include "main.h"

/**
 * swap_int - swap 2 variables
 * @a: pointer1
 * @b: pointer2
 * Return: success
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
