#include <stdlib.h>
#include <time.h>
/**
 * main -start program
 *
 * Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (number > 0)
{
printf("The number is positive.\n");
}
else if (number < 0)
{
printf("The number is negative.\n");
}
else
{
printf("The number is zero.\n");
}
return (0);
}
