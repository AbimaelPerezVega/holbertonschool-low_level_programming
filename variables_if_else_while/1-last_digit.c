#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -the last digit
 *
 * Return: 0
*/

int main(void)
{
int n, lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
/* your code goes there */
if (lastd > 5)
{
printf("Last digit of %d and %d is greater than 5\n", n, lastd);
}
else if (lastd == 0)
{
printf("Last digit of %d and %d is 0\n", n, lastd);
}
else if (lastd < 6)
{
printf("Last digit of %d and %d is less than 6 and not 0\n", n, lastd);
}
return (0);
}