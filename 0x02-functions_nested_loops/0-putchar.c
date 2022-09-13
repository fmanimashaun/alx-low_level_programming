#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
