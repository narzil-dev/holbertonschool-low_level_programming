
#include <stdio.h>

/**
 * main - Affiche le nom utilisé pour lancer le programme
 * @argc: Nombre d'arguments reçus, non utilisé
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
