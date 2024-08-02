#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure (file cannot be written, write fails,
 * etc...). Do not create the file if it does not exist. If filename is NULL
 * return -1. If text_content is NULL, do not add anything to the file. Return
 * 1 if the file exists and -1 if the file does not exist or if you do not have
 * the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t n_written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);
	if (text_content)
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
