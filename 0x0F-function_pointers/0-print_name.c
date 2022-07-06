#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * 
 * @name: The name to print.
 * @f: Pointer to the function.
 *
 * Return: 0 (success).
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
