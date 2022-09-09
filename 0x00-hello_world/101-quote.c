#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
