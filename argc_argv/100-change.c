#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme principal qui convertit un montant
 * en cents en pièces de monnaie.
 * @argc: Nombre d'arguments passés au programme.
 * @argv: Tableau de chaînes de caractères représent
 * les arguments passés au programme.
 *
 * Return: 0 si le programme s'exécute avec succès, 1 si une erreur survient.
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents = atoi(argv[1]);

		if (cents >= 25)
		{
			result += (cents / 25);
			cents = cents % 25;
		}
		if (cents >= 10)
		{
			result += (cents / 10);
			cents = cents % 10;
		}
		if (cents >= 5)
		{
			result += (cents / 5);
			cents = cents % 5;
		}
		if (cents >= 2)
		{
			result += (cents / 2);
			cents = cents % 2;
		}
		if (cents == 1)
		{
			result++;
			cents = 0;
		}
		printf("%d\n", result);
		return (0);
	}
}
