#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_length - calculate the length
 *@str: string
 *
 *Return: length of the string
 *
 *
*/
size_t str_length(const char *str)
{
size_t length = 0;
while (str[length] != '\0')
	length++;
return (length);
}

/**
 *add_node - adds a new mode at the beginning of a list_t list
 *@head: pointer to a pointer
 *@str: string to be added to the new mode
 *
 *Return: the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (str == NULL)
	return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = str_length(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
