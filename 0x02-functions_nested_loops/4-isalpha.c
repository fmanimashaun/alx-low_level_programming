#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic character 
 * using only `_putchar`
 * @c: the character to check
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
