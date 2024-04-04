#include "lists.h"
#include <stdlib.h>
/**
 *sum_dlistint - return the sum of all the data
 *@head: pointer to the head of the list
 *
 *Return: the sum of all the data
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
