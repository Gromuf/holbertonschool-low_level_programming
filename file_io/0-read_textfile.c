#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print, or 0 if there
 * is an error (e.g., the file cannot be opened or read, filename is NULL,
 * memory allocation fails, or write fails).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t n_read;
	ssize_t n_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}
	n_read = read(file_desc, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}
	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}
	free(buffer);
	close(file_desc);
	return (n_written);
}

