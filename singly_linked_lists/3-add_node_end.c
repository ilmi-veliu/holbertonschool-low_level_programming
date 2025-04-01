#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: A pointer to the first node of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *temp;
	int len = 0;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	last_node->str = strdup(str);
	last_node->len = len;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last_node;
	}

	return (last_node);
}
