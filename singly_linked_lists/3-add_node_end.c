#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;

	last_node = malloc(sizeof(list_t));

	if (last_node == NULL)
	return (NULL);

	last_node->str = strdup(str);
	last_node->len = 
	
}