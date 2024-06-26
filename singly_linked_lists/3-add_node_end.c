#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_length - calculate the length
 *@str: string
 *Return: length of the string
*/
size_t str_length(const char *str)
{
size_t length = 0;
while (str[length] != '\0')
	length++;
return (length);
}

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to a pointer to the head
 *@str: string to be added to the new node
 *
 *Return: the address of new element
 *
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *current;

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
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
return (new_node);
}
