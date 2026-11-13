
#include <stdio.h>

/**
 * main - Affiche une calculatrice interactive avec quatre opérations
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	int choix = 99;
	int a;
	int b;

	while (choix != 0)
	{
		printf("\n\nSimple Calculator\n\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n\n");

		printf("Votre choix:");
		scanf("%d", &choix);
        printf("\n");

		if (choix < 0 || choix > 4)
		{
			printf("Invalid choice\n");
		}

		if (choix == 1)
		{
			printf("A:");
			scanf("%d", &a);

			printf("B:");
			scanf("%d", &b);

			printf("Result: %d\n", a + b);
		}

		if (choix == 2)
		{
			printf("A:");
			scanf("%d", &a);

			printf("B:");
			scanf("%d", &b);

			printf("Result: %d\n", a - b);
		}

		if (choix == 3)
		{
			printf("A:");
			scanf("%d", &a);

			printf("B:");
			scanf("%d", &b);

			printf("Result: %d\n", a * b);
		}

		if (choix == 4)
		{
			printf("A:");
			scanf("%d", &a);

			printf("B:");
			scanf("%d", &b);

			if (b == 0)
			{
				printf("Error: division by zero\n");
			}
			else
			{
				printf("Result: %d\n", a / b);
			}
		}
	}

	printf("Bye!\n");

	return (0);
}
