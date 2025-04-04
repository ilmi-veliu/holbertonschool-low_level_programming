#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: The list to print.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t compteur = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		compteur++;
		h = h->next;
	}

	return (compteur);
}
