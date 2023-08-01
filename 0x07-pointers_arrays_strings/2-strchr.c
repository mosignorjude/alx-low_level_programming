/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: a pointer to the occurrence of c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /*Return a pointer to the first occurrence of c*/
		}
		s++; /*Move to the next character in the string*/
	}
	return (NULL); /*If c is not found, return NULL*/
}
