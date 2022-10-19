#include <stdio.h>

/**
 * main - prints out first 98
 *
 * Return: return 0
 */

int main(void)
{
	int inc;
	unsigned long n1 = 0, n2 = 1, n3;
	unsigned long n1_h1, n1_h2, n2_h1, n2_h2;
	unsigned long h1, h2;

	for (inc = 0; inc < 92; inc++)
	{
		n3 = n1 + n2;
		printf("%lu, ", n3);
		n1 = n2;
		n2 = n3;
	}

}
