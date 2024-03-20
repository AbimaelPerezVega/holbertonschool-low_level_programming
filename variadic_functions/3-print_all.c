#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - pirnts all the stuff
 *
 *
 *
 *
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char *str;

va_start(args , format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
	printf("%s%c", separator, va_arg(args, int));
	break;
case 'i':
	printf("%s%d", separator, va_arg(args, int));
	break;
case 'f':
	printf("%s%f", separator, va_arg(args, double));
	break;
case 's':
	str = va_arg(args, char *);
	printf ("%s%s", separator, (str == NULL) ? "(nil)" : str);
	break;
default:
	i++;
	continue;
}
separator = ", ";
i++;
}
printf("\n");

va_end(args);
}
