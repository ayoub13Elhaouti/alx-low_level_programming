#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: multiplies two numbers
 *
 * @argc: Number of arguments passed through the program
 * @argv: pointer that points to the array of the arguments
 *
 * Return: 0 and result when successful, 1 and Error when parameters not met
 */
int main(int argc, char *argv[])
{
	int  i = argc - 1, j = i - 1, result;

	if (i == 2)
	{
		result = atoi(argv[i]) * atoi(argv[j]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
