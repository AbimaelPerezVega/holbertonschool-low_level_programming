#include "lists.h"
#include <stdlib.h>
/**
 *insert_dnodeint_at_index - inserts a new node
 *@h: pointer to a pointer
 *@idx: index of the list
 *@n: value to be stored in the new node
 *Return: the address of the new node, or NULL if it failed
 *
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;

if (h == NULL)
	return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
	(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
current = *h;
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = current->next;
if (current->next != NULL)
	current->next->prev = new_node;
current->next = new_node;
new_node->prev = current;

return (new_node);
}
