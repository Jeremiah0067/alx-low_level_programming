#include <stdio.h>

/**
 * main- just needed
 *
 * Return: always returns 0
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');

	return (0);
}
