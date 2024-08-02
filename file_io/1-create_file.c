#include "main.h"

/**
 * create_file - Creates a file with given name and writes text content to it
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not be
 * written, write fails, etc...)
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t n_written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		n_written = write(file_desc, text_content, length);
		if (n_written == -1 || (size_t)n_written != length)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
