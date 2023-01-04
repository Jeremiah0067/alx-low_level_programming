#include "main.h"
/**
 *  base case: print the character and return if we have reached the end of the string
 *
 *   print the current character and call the function again with the next character in the string
 * @*s: stores string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
