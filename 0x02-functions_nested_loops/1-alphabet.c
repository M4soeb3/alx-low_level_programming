#include "main.h"
/**
 * main - print aplhabet
 * Return (0) Success
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar (alph);
		alph++;
	}
	_putchar ('\n');
}
