#include "variadic_functions.h"

/**
 * format_char - formats
 * @separator: the string
 * @ap: argument
*/

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - formats
 * @separator: the string
 * @ap: argument
*/

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - formats
 * @separator: the string
 * @ap: argument
*/

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, int));
}

/**
 * format_string - formats
 * @separator: the string
 * @ap: argument
*/

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);
	
	switch ((int)(!str))
		case 1:
			str = "(nil)";
	
	printf("%s%s", separator, str);
}

/**
 * print_all - prints
 * @format: the format
*/

void print_all(const char * const format, ...)
{
	int k = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[k])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[k] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		k++;
	}
	printf("\n");
	va_end(ap);
}
