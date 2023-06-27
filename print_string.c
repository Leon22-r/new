#include "main.h"
/**
 * _string - prints a string after a specifier
 * @string: what is printed
 * @x: number of characters to print
 * Return: pointer to remaining end.
*/
int _string(char *string, int x)
{
	int k = 0, count = x;

	while (string[k])
	{
		_putchar(string[k]);
		k++;
		count++;
	}
	return (count);
}
