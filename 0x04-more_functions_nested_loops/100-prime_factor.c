#include <stdio.h>

/**
 * main - prints out the highest prime
 *
 * Return: success
 */

int main(void)
{
	int i = 2;
	long n = 612852475143;

	while (i < n)
	{
		while (n % i == 0)
		{
			if (n == i)
			{
				break;
			}
			n /= i;
		}
		i++;
	}
	printf("%lu\n", n);
	return (0);
}
