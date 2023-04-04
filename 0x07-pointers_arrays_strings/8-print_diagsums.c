#include "main.h"
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/
void	print_diagsums(int	*a, int	size)
{
	int i = 0, s1 = 0, s2 = 0;

	while (i < size)
	{
		s1 += a[i];
		a += size;
		i++;
	}

	a -= size;

	i = 0;
	while (i < size)
	{
		s2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
