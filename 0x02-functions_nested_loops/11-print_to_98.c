#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @nbr: number input
 * Return: Always 0 (Success)
 */
void	print_to_98(int	nbr)
{
	if (nbr < 98)
	{
		while (nbr <= 98)
		{
			printf("%d", nbr);
			if (nbr != 98)
			{
				printf(", ");
			}
			nbr++;
		}
	}
	else if (nbr > 98)
	{
		while (nbr >= 98)
		{
			printf("%d", nbr);
			if (nbr != 98)
			{
				printf(", ");
			}
			nbr--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
