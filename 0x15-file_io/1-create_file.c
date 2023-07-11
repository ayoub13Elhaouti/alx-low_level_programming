#include "main.h"
/**
 * create_file - create a file.
 * @filename: name of the file.
 * @text_content: text to write inside it.
 *
 * Return: 1 if the file was created, -1 else.
 */
int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
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
 * @str: string.
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
