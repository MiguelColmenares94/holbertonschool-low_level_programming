#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print input
 * @format: types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int a, b;
	char *d = NULL;
	va_list inputs;

	while (format && format[a])
	{
		va_start(inputs, format);
		a = 0;
		while (format[a])
		{
			b = 1;
			switch (format[a])
			{
				case 'c':
					printf("%c", va_arg(inputs, int));
					break;
				case 'i':
					printf("%d", va_arg(inputs, int));
					break;
				case 'f':
					printf("%f", va_arg(inputs, double));
					break;
				case 's':
					d = va_arg(inputs, char *);
					if (d == NULL)
						d = "(nil)";
					printf("%s", d);
					break;
				default:
					b = 0;
					break;
			}
			a++;
			if (format[a] && b)
				printf(", ");
		}
		va_end(inputs);
	}
	printf("\n");
}
