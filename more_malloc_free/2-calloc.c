#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocating the memory of the array
 *@nmemb: number of elements in the array
 *@size: the size of the elements
 *
 *Return: null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size, i; 

if (nmemb == 0 || size == 0)
	return (NULL);

total_size = nmemb * size;

ptr = malloc(total_size);

if (ptr == NULL)
	return (NULL);

for (i = 0; i < total_size; i++)
	*((char *)ptr + i) = 0;

return (ptr);
}
