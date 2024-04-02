#include <stdio.h>
#include "lists.h"
#include <stddef.h>
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

while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", current->len, current->str);

current = current->next;
count++;
}

return (count);
}
