#include "main.h"
#include <stdarg.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string composed of zero or more directives.
 * Return:the number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
	va_list argslist; /* a variable no of arguments using stdarg library*/
	int num_char = 0, k;/* keep track of the number of char*/

	if (format == NULL)
		return (-1);
	va_start(argslist, format);
	for (k = 0; format && format[k] != '\0'; k++)
	{
		if (format[k] == '%')
		{
			num_char = for_specifier(&format[k + 1], argslist, num_char);
			k++;
		}
		else
		{
			_putchar(format[k]);
			num_char++;
		}
	}
	va_end(argslist);
	return (num_char);
}
