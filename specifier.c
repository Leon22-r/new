#include "main.h"
/**
 * for_specifier - determines whether next element is
 * char or string or integer or decimal.
 * @next: the character to decide.
 * @list: the variadic list.
 * Return: 0
*/
int for_specifier(const char *next, va_list list, int n)
{
	int i;
	char *s;

	if (*next == 'c')
	{
		i = va_arg(list, int);
		_putchar(i);
		n++;
	}
	else if (*next == 's')
	{
		s = va_arg(list, char *);
		n = _string(s, n);
	}
	else if (*next == '%')
	{
		_putchar('%');
		n++;
	}
	else if (*next == 'd' || *next == 'i')
	{
		i = va_arg(list, int);
		n = print_int(i, n);
	}
	else
	{
		_putchar(*next);
		n++;
	}
	return (n);
}
