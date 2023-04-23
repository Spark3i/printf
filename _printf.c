#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
  * _printf- produces given output
  * @format: format to print
  * Return: the output in a specific format
  *
  */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	char *x;
	va_list ap;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += putchar(va_arg(ap, int));
					break;
				case 's':
					x = va_arg(ap, char *);
					x = x ? x : "(nil)";
					printf("%s", x);
					count += strlen(x);
					break;
				case '%':
					count += putchar('%');
					break;
				default:
					count += putchar('%');
					count += putchar(format[i--]);
					break;
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
