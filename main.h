#ifndef MAIN_H
#define MAIN_H
/*header file needed*/
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
/*find the next character after '%' */
int for_specifier(const char *next, va_list list, int);

/*function prototype for printing characters and strings*/
int _printf(const char *format, ...);
int _putchar(char c);
int _string(char *, int);
int _char(int, int);

/*functions to print integers*/
int print_int(int , int);


#endif/*MAIN_H*/
