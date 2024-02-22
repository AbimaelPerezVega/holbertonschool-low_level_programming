#include <unistd.h>

/**
 * _putchar -writes ther character c
 *
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
