#include "main.h"

/**
 * print_rev - prints revarsed string, followed by a newline
 *
 * @s: pointer to the string to print
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
