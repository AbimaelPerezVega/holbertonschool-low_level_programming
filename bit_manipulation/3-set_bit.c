#include "main.h"
/**
 *set_bit - sets the value
 *@n: pointer to an unsigned long int
 *@index: index
 *
 *Return: 1 if it worked
 *
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
	return (-1);

*n |= (1UL << index);
return (1);
}
