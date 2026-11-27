
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste
 * @head: Adresse du pointeur vers le premier nœud
 * @str: Chaîne de caractères à dupliquer
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nouveau_node;
	unsigned int longueur = 0;

	nouveau_node = malloc(sizeof(list_t));
	if (nouveau_node == NULL)
		return (NULL);

	nouveau_node->str = strdup(str);
	if (nouveau_node->str == NULL)
	{
		free(nouveau_node);
		return (NULL);
	}

	while (str[longueur] != '\0')
		longueur++;

	nouveau_node->len = longueur;
	nouveau_node->next = *head;
	*head = nouveau_node;

	return (nouveau_node);
}
