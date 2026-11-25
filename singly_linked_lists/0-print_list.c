
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Affiche les éléments d'une liste simplement chaînée
 * @h: Pointeur vers le premier nœud de la liste
 *
 * Return: Nombre de nœuds parcourus
 */
size_t print_list(const list_t *h)
{
	size_t compteur = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		compteur++;
		h = h->next;
	}

	return (compteur);
}
