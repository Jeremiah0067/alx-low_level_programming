#include <stdio.h>
/**
 * main- neede
 *
 * Return: always returns 0(positive)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	return (0);
}
