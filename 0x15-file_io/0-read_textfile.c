#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: function that reads a text file and prints it
 * to the POSIX stdout.
 * Return: number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl, let, w;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
	{
		free(txt);
		return (0);
	}

	let = read(fl, txt, letters);

	w = write(STDOUT_FILENO, txt, let);

	close(fl);

	return (w);
}
