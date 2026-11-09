
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string using dynamic memory
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *p;
	char *tableau;
	char *tableau_debut;
	unsigned int taille = 0;

	if (str == NULL)
		return (NULL);

	p = str;
	while (*p != '\0')
	{
		taille++;
		p++;
	}

	tableau = malloc(sizeof(char) * (taille + 1));
	if (tableau == NULL)
		return (NULL);

	tableau_debut = tableau;
	p = str;

	while (*p != '\0')
	{
		*tableau = *p;
		p++;
		tableau++;
	}

	*tableau = '\0';

	return (tableau_debut);
}
