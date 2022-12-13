#include <stdio.h>

/**
 * main- needed
 *
 * Return: always returns 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = '0'; c <= '5'; c++)
	{
		putchar(c + 'a');
	}
	putchar('\n');

	return (0);
}
