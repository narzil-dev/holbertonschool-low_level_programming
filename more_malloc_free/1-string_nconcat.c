
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to copy from s2
 *
 * Return: Pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ts1 = 0, ts2 = 0, i = 0, j = 0;
	char *adresse;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[ts1] != '\0')
		ts1++;
	while (s2[ts2] != '\0' && ts2 < n)
		ts2++;

	adresse = malloc(ts1 + ts2 + 1);
	if (adresse == NULL)
		return (NULL);

	while (i < ts1)
	{
		adresse[i] = s1[i];
		i++;
	}
	while (j < ts2)
	{
		adresse[i] = s2[j];
		i++;
		j++;
	}
	adresse[i] = '\0';
	return (adresse);
}
