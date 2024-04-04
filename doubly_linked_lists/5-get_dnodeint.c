#include "lists.h"
#include <stdlib.h>
/**
 *get_dnodeint_at_index - Returns the node of a dlistint_t linked list
 *@head: pointer to the head of the list
 *@index: index of the node, starting from 0
 *
 *Return: pointer to the nth nodem or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;

while (current != NULL && i < index)
{
current = current->next;
i++;
}
return (current);
}
