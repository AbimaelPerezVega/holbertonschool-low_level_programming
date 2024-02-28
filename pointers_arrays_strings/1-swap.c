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

/**
 * main - testing variables
 * Return: 0
*/
int main(void)
{
int m = 25;
int n = 100;
_putchar("m is %d, n is %d\n", m, n);
swap_int(&m, &n);
_putchar("m is %d, n is %d\n", m, n);
return (0);
}
