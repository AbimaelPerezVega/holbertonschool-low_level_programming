#include "main.h"
#include <stdio.h>
/**
 * swap_int - swapping the variables
 * @a: swapping variable
 * @b: swapping variable
 * Return: void
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
