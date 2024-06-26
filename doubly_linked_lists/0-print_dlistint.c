#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - prints all the elemnents of a dlistint_t list
 *@h: pointer to the head of the list
 *
 *Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return (count);
}
