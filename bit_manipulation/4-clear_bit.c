#include "main.h"
/**
 *clear_bit - sets the value of a bit
 *@n: pointer to an unsigned long int
 *@index: index
 *Return: 1 if it worked or -1 if an error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
	return (-1);
*n &= ~(1UL << index);
return (1);
}
