#include "main.h"

/**
 * void print_alphabet_x10 - prints 10 times the alphabet lowercase
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		char alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
