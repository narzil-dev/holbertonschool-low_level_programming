
#include <stdio.h>

/**
 * main - Affiche le nombre d'arguments transmis au programme
 * @argc: Nombre total d'arguments, nom du programme inclus
 * @argv: Tableau des arguments, non utilisé
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
