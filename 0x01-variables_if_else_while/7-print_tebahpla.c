#include <stdio.h>

/**
 * main - alphabet in lowercase letters in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	putchar(alph);

	putchar('\n');

	return (0);
}
