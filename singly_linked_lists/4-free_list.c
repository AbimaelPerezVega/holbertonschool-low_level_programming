#include "lists.h"
#include <stdlib.h>
/**
 *free_list - frees a list_t list
 *@head: pointer to the head of the linked list
*/
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
