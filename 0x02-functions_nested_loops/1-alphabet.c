#include "_putchar.c"

/**
 * main- Just for some reason
 *
 * Return: No value for return
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
