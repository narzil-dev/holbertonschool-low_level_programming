
#include <stdio.h>

int main(void)
{
	int choix;

	printf("Simple Calculator \n\n");
	printf("1) Add \n");
	printf("2) Subtract \n");
	printf("3) Multiply \n");
	printf("4) Divide \n");
	printf("0) Quit \n\n");

	printf("Votre choix:");
	scanf("%d", &choix);

	if (choix == 0)
		printf("Bye!\n");

	return (0);
}
