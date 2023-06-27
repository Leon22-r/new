#include "main.h"
/**
 * _putchar - print character
 * @c: character to print
 * Return: 1 on succes and -1 on failure
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
