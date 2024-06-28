#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer in a specific format
 * @b: the buffer to print
 * @size: the number of bytes to print from the buffer
 *
 * Description: Prints the content of size bytes of the buffer pointed
 * to by b. The output is 10 bytes per line. Each line starts with the
 * position of the first byte of the line in hexadecimal (8 chars),
 * followed by the hexadecimal content (2 chars for each byte, 2 bytes
 * at a time, separated by a space), and ends with the content of the
 * buffer (printable characters or '.' if not printable).
 * If size is 0 or less, only a new line is printed.
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0 ; i < size ; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0 ; j < 10 ; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");
			if (j % 2 == 1 && j != 9)
				printf(" ");
		}
		printf(" ");
	for (j = 0 ; j < 10 ; j++)
	{
		if (i + j < size)
		{
			char c = b[i + j];

			if (isprint(c))
				printf("%c", c);
			else
				printf(".");
		}
		else
			break;
	}
	printf("\n");
	}
}
