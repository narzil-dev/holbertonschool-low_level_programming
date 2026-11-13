#include <stdio.h>

/**
 * main - Displays an interactive calculator menu
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choix = 99;

	while (choix != 0)
	{
		printf("Simple Calculator\n\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n\n");

		printf("Votre choix:");
		scanf("%d", &choix);

		if (choix < 0 || choix > 4)
		{
			printf("Invalid choice\n");
		}
	}

	printf("Bye!\n");

	return (0);
}
