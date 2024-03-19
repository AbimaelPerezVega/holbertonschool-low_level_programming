#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - searches for the integer
 *@array: array to search
 *@size: size of the array
 *
 *@cmp: pointer to the function to be used to compare values
 *
 *Return: index of the first element for which cmp does not return 0,
 *         -1 if no element matches or size is less than or equal to 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
	return (i);
}
}
return (-1);
}
