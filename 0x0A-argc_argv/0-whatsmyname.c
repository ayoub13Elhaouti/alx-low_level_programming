#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints the name of the program
 *
 * @argc: number of arguments passed through commendline
 * @argv: pointer that contains the arrays of the arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
