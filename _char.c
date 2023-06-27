#include "main.h"
/**
 * _char - print's a character.
 * @x: the number of characters printed
 * @a: the character to print
 * Return: number of characters printed
*/
int _char(int a, int x)
{
	int count = x;

	_putchar(a);
	count++;
	return (count);
}
