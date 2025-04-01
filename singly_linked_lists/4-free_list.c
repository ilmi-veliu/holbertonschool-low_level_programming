#include "lists.h"
/**
 * free_list - Frees a linked list.
 * @head: Pointer to the first node of the list.
 *
 * Description: This function frees all the nodes of a singly linked list,
 * including the strings stored in each node.
 */
void free_list(list_t *head)
{
        list_t *temp;

        while (head != NULL)
        {
                temp = head;
                head = head->next;
                free(temp->str);
                free(temp);
        }
}