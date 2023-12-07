#include "lists.h"

/**
 * free_dlistint - frees a dlist
 * @head: pointer to current head node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
