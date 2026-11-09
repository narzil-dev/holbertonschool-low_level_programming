
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings in allocated memory
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *q, *tableau, *tableau_debut;
	int taille_s1 = 0, taille_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = s1;
	while (*p != '\0')
	{
		taille_s1++;
		p++;
	}
	q = s2;
	while (*q != '\0')
	{
		taille_s2++;
		q++;
	}
	tableau = malloc(sizeof(char) * (taille_s1 + taille_s2 + 1));
	if (tableau == NULL)
		return (NULL);
	tableau_debut = tableau;
	p = s1;
	q = s2;
	while (*p != '\0')
	{
		*tableau++ = *p++;
	}
	while (*q != '\0')
	{
		*tableau++ = *q++;
	}
	*tableau = '\0';
	return (tableau_debut);
}
