#include <stdio.h>

/**
 * main - prints out first 50
 *
 * Return: return 0
 */

int main(void)
{
	int incr;
	unsigned long n1 = 0, n2 = 1, n3;

	for (incr = 0; incr < 50; incr++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;

		if (incr == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
