#include "main.h"

/**
 * print_sign - print the sign of a number
 * using only `_putchar`
 * @n: the the number to check for sign
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n >  0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-);
	}
}
