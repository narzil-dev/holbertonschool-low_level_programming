#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste
 * @head: Adresse du pointeur vers le premier nœud
 * @str: Chaîne de caractères à dupliquer
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nouveau_node;
	list_t *courant;
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
	nouveau_node->next = NULL;

	if (*head == NULL)
	{
		*head = nouveau_node;
	}
	else
	{
		courant = *head;
		while (courant->next != NULL)
		{
			courant = courant->next;
		}
		courant->next = nouveau_node;
	}

	return (nouveau_node);
}
