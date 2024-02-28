#include "main.h"
#include <stdio.h>
/**
 * _puts - printing a string
 *@str: printing a string
 *Return: void
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
