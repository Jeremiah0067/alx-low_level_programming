#include <ctype.h>

/**
 * main- Just needed
 *
 * @str- You know
 *
 * Return: always returns 0
 */

char *cap_string(char *str)
{
	int i;

	str[0] = toupper(str[0]);

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			str[i + 1] = toupper(str[i + 1]);
		}

		}
	return (str);
}

