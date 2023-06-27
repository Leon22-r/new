#include "main.h"
/**
 * print_int - print's an integer.
 * @i: the integer.
*/
int print_int(int i, int x)
{
	if (i < 0)
	{
		_putchar('-');
		x++;
		i *= -1;
	}
	if (i > 9)
		print_int(i / 10, x++);
	_putchar(i % 10 + '0');
	return (x);
}
