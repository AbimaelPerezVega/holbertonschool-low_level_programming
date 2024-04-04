#include "lists.h"
#include <stdlib.h>
/**
 *delete_dnodeint_at_index - deletes the node at index
 *@head: pointer to a pointer
 *@index: index of the node to be deleted
 *Return: 1 if succeeded, -1 if failed
 *
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *tmp;
unsigned int i;

if (*head == NULL)
	return (-1);

if (index == 0)
{
tmp = *head;
*head = (*head)->next;
if (*head != NULL)
	(*head)->prev = NULL;
free(tmp);
return (1);
}
current = *head;
for (i = 0; i < index && current != NULL; i++)
{
current = current->next;
}
if (current == NULL)
{
	return (-1);
}
	tmp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
	current->next->prev = current->prev;
	free(tmp);

	return (1);
}
