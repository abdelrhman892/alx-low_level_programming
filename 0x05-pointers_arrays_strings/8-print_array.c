#include "main.h"

/**
 * print_array - prints n elaments fo and array or integers
 *
 * @n: elements parameter input
 * @a: String parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i + 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
