#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n: unsigned long int
 *@index: index
 *
 *Return: the value of the bit at the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
	return (-1);

mask = 1UL << index;
return ((n & mask) ? 1 : 0);
}
