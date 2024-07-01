#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print a 2D array representing a chessboard
 * @a: 2D array of characters representing the chessboard
 *
 * This function prints the contents of a 2D array @a, which is assumed
 * to represent an 8x8 chessboard. Each element of @a represents a square
 * on the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
