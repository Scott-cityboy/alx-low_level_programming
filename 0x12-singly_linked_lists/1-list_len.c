#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return a number of element in a linked list.
 * @h: pointer to list_t list.
 * Return: a number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

