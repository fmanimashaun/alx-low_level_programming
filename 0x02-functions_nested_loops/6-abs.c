#include "main.h"

/**
 * _abs - compute the absolute value of a number
 * using only `_putchar`
 * @n: the the number to compute for sign
 *
 * Return: 0
 */

int _abs(int n)
{
	int abs_n;

	if (n >=  0)
	{
		abs_n = n;
		return (abs_n);
	}
	else
	{
		abs_n = n * (-1);
		return (abs_n);
	}
}
