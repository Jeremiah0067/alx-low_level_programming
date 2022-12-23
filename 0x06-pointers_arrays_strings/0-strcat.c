#include <stdio.h>

/**
 * main- Just needed
 *
 * @*_strcat- Just there jor
 * Return- Always returns 0
 *
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
	        *ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return dest;
}
