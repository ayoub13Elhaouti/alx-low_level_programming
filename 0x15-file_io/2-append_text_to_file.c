#include "main.h"
/**
 * append_text_to_file - Append the text at the end of a file
 * @filename: name of the file to create.
 * @text_content: text to write inside the file.
 *
 * Return: 1 if text_content was appended, -1 else.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_RDWR | O_APPEND);
	if (fd_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, my_strlen(text_content));
		if (fd_write == -1)
			return (-1);
	}
	close(fd_open);
	return (1);
}

/**
 * my_strlen - calculate the length of a string.
 * @str: array of characters.
 *
 * Return: length of the string.
 */
int my_strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}
