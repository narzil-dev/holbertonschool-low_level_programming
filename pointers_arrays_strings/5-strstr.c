
#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: string in which to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		p = needle;
		q = haystack;

		while (*p != '\0' && *p == *q)
		{
			p++;
			q++;
		}

		if (*p == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
