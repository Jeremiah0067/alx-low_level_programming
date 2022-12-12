#include <stdio.h>

/**
 * main- hi bitch
 *
 * Return: always returns 0(positive)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
