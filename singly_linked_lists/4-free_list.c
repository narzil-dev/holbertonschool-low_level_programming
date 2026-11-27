
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libère la mémoire d'une liste simplement chaînée
 * @head: Pointeur vers le premier nœud
 */
void free_list(list_t *head)
{
	list_t *suivant;
	list_t *courant = head;

	while (courant != NULL)
	{
		suivant = courant->next;
		free(courant->str);
		free(courant);
		courant = suivant;
	}
}
  