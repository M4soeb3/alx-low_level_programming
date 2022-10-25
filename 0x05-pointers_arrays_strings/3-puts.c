#include "main.h"

/**
 * _puts - prints a string and a newline
 * @str: pointer to string
 * Return: success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
