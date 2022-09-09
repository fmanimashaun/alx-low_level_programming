#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	const char s = "and that piece of art is useful\" - Dora Korpar,2015-10-19\n";

	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      strlen(s));
	return (1);
}
