#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne
 * @s: Chaîne à parcourir
 *
 * Return: Nombre de caractères
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
