#include "lists.h"

/**
 * get_nodeint_at_index - It returns node at certain index in linked list.
 * @head: The first node in linked list.
 * @index: An index of the node to return.
 * Return: A pointer to  node we are looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

