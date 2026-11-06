
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any accepted character
 * @s: string to examine
 * @accept: characters to search for
 *
 * Return: pointer to the first matching character, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*p == *s)
				return (s);

			p++;
		}

		s++;
	}

	return (NULL);
}
