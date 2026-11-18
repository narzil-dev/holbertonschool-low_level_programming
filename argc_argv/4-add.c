
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Additionne les nombres positifs transmis en arguments
 * @argc: Nombre total d'arguments reçus
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès, 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int somme = 0;
	int i = 1;
	int j = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		j = 0;

		for (; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		somme = somme + atoi(argv[i]);
	}

	printf("%d\n", somme);
	return (0);
}
