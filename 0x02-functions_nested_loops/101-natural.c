#include "main.h"
#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int	main(void)
{
	unsigned long int	s1;
	unsigned long int	s3;
	unsigned long int	s5;
	int	i;

	s5 = 0;
	s3 = 0;
	s1 = 0;
	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
			s3 += i;
		else if ((i % 5) == 0)
			s5 += i;
	}
	s1 = s3 + s5;
	printf("%lu\n", s1);
	return (0);
}
