#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of a dlistint_t list
 * @head: Pointer to the first node of the list
 *
 * Return: Sum of all values, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		total += tmp->n;
		tmp = tmp->next;
	}

	return (total);
}
