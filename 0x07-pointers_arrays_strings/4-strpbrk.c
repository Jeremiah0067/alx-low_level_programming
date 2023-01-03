#include <stdio.h>

/**
 * _strpbrk: To b\print alike letters
 *
 * Return: Returns the address of the value found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return &s[i];
			}
			j++;
		}
		i++;
	}
	return (&s[i]);
}
