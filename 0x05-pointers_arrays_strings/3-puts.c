#include <unistd.h>

/**
 * _puts - Print a string followed by a newline to stdout
 *
 * @str: Pointer to the string to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
