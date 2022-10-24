#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: size of the triangle
 * Return: success
 */

void print_triangle(int size)
{
	int i, j, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= (size - 1); j++)
		{
			for (i = 0; i < (size - 1) - j; i++)
			{
				_putchar(' ');
			}
			for (n = 0; n <= j; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
