
#include <stdio.h>

/**
 * main - Affiche tous les arguments reçus par le programme
 * @argc: Nombre total d'arguments
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
