#include <stdio.h>
/**
 * main - number16
 *
 * Return: 0
*/
int main(void)
{
int p;
char low;

for (p = '0'; p <= '9'; p++)
putchar(p);

for (low = 'a'; low <= 'f'; low++)
	putchar(low);
putchar('\n');

return (0);
}
