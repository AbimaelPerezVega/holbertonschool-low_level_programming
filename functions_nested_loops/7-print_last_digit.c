#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number
 *@n: the number to be treated
 *
 *Return: Value of the last digit
*/
int print_last_digit(int n)

{

int lastd;

lastd = n % 10;
if (lastd < 0)
{
lastd = lastd * -1;
}
_putchar(lastd + '0');
return (lastd);
}
