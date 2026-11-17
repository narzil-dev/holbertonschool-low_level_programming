#include "function_pointers.h"

/**
 * print_name - Transmet un nom à une fonction
 * @name: Nom à traiter
 * @f: Fonction chargée de traiter le nom
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
