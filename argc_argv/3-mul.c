
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplie deux nombres transmis en arguments
 * @argc: Nombre total d'arguments reçus
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès, 1 si le nombre d'arguments est incorrect
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
