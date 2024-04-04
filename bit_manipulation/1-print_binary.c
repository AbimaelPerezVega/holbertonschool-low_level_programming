#include "main.h"
#include <stdio.h>
/**
 *print_binary - prints the binary representation of a number
 *@n: unsigned long int to be printed as binary
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int found_one = 0;

if (n == 0)
{
putchar('0');
return;
}
while (mask)
{
if (n & mask)
{
putchar('1');
found_one = 1;
}
else if (found_one)
{
putchar('0');
}
mask >>= 1;
}
}
