/**
 * _strlen- for returning a particular value
 *
 * s- a character
 *
 * Return: return length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
