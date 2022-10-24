#include "main.h"

/**
 * print_diagonal - print a diagonal line 
 * @n: length of line
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int i = 0, s;

	if (n > 0)
	{
		while (i < n)
		{
			for (s = 0; s < i; s++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else 
		_putchar('\n');
}
