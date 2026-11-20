
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Exécute une opération mathématique
 * @argc: Nombre d'arguments reçus
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès, sinon un code d'erreur
 */
int main(int argc, char *argv[])
{
	int a, b, resultat;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	resultat = operation(a, b);
	printf("%d\n", resultat);

	return (0);
}
