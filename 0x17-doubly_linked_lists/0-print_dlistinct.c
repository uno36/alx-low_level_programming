#include "lists.h"

/**
 * print_dlistint - Print all elements of a dlistint_t list
 * @h: pointer to the head of a dlistint_t list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (!h)
		return (0);

/* Make sure h is pointing to the first node */
	if (h->prev != NULL)
	{
		while (h->prev)
			h = h->prev;
	}

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
