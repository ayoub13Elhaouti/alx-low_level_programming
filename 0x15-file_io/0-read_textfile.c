#include "main.h"
/**
 * read_textfile - read a text file.
 * @filename: name of the file.
 * @letters: number of letters to print in the stdout.
 *
 * Return: number of letter printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_read, count_chars, fd_open;
	char *buffer_letters;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);
	buffer_letters = malloc(sizeof(char) * letters);
	if (buffer_letters == NULL)
		return (0);
	fd_read = read(fd_open, buffer_letters, letters);
	if (fd_read == -1)
	{
		free(buffer_letters);
		return (0);
	}
	count_chars = write(STDOUT_FILENO, buffer_letters, fd_read);
	if (count_chars == -1)
	{
		free(buffer_letters);
		return (0);
	}
	close(fd_open);
	free(buffer_letters);
	return (count_chars);
}
