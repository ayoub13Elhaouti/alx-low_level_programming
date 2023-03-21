#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* main - print all decimal digits
*
* Return: 0
*/

int	main(void)
{
	char	*str = "_putchar";
	
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
