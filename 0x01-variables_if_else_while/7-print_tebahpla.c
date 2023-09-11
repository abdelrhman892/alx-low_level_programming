#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print a-z in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch >= 'z')
	{
		putchar(ch);
		c--;
	}
	putchar('\n');

	return (0);
}
