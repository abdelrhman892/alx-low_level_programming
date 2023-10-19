#include "lists.h"

/**
 * _strlen - returns the length
 *
 * @s: string
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints
 *
 * @h: pointer
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
