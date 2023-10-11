#include "function_pointers.h"

/**
 * print_name - prints
 * @name: the string name
 * @f: the printing
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
