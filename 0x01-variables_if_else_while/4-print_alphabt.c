#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters excluding 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		iputchar(alph);
	}
	putchar('\n');
	
	
	return (0);
}
