#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Pointer to the first node of the list
 * @index: Index of the node to return (starting from 0)
 *
 * Return: Pointer to the node at index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);

		tmp = tmp->next;
		i++;
	}

	return (NULL);
}
