
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to examine
 * @accept: accepted characters
 *
 * Return: number of accepted characters at the beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
	char *start = s;
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0' && *p != *s)
			p++;

		if (*p == '\0')
			return (s - start);

		s++;
	}

	return (s - start);
}
