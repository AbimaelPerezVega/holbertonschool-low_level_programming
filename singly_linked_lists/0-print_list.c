#include <stdio.h>
#include "lists.h"
/**
 *print_list - printing the elements
 *@h: pointer to the head
 *
 *
 *Return: count
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

printf("[");
while (current->str != NULL)
{
if (current->str != NULL)
	printf("%s", current->str);
else
	printf("(nil)");

count++;
current = current->next;

if (current != NULL)
	printf(", ");
}
printf("]\n");

return (count);
}
