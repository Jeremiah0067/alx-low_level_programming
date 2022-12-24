#include <ctype.h>
/**
 * main- Just needed
 *
 * @s:Just needed
 *
 * Return: Always returns 0
 */
char *string_toupper(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}

	return (s);
}
