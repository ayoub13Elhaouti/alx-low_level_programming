#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - program that copies the content of a file to another file
* @argc: arguments count
* @argv: arguments array
* Return: 0
*/

int main(int argc, char *argv[])
{
int fl_from, fl_to;
int nbr1 = 1024, nbr2 = 0;
char buffer[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp fl_from fl_to\n"), exit(97);
fl_from = open(argv[1], O_RDONLY);
if (fl_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
fl_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (fl_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fl_from), exit(99);
}
while (nbr1 == 1024)
{
	nbr1 = read(fl_from, buffer, 1024);
	if (nbr1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	nbr2 = write(fl_to, buffer, nbr1);
	if (nbr2 < nbr1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(fl_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_from), exit(100);

if (close(fl_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_to), exit(100);

return (0);
}
