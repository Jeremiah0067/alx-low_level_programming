char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != -1)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
		i++;
	}
	return (&s[-1]);
}
