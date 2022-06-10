#include "main.h"

/**
* print_sign n -> returns 1 and prints + if n is >0, 0 n=0, -1 n <0
* @c: takes in a character
* Return: 0 for uppercase, 1 for lowercase
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
		else if (n == 0)
		{
			_putchar(48);
			return (0);
		}
	else
	{
		_putchar(45);
		return (-1);
	}
}
