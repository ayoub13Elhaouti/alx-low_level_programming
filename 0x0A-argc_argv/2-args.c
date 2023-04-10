#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints all the arguments separated by a new line
 *
 * @argc: number of arguments passed through commendline
 * @argv: pointer that points to the array of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
