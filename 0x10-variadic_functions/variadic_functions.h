#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct printer - New struct type defining a printer.
 * @symbol: Symbol representing data type
 * @print: pointer to funtion that prints data type corresponding to symbol.
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(char *separator, va_list args);
void print_a_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
void print_a_char_ptr(char *separator, va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
