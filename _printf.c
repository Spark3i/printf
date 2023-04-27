#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * _printf- produces given output
  * @format: format to print
  * Return: the output in a specific format
  *
  */
int _printf(const char *format, ...)
{
	int i, count = 0;
	char *x;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					putchar(va_arg(ap, int));
					count++;
					break;
				case 's':
					x = va_arg(ap, char *);
					if (!x)
						x = "(null)";
					while (*x)
					{
						putchar(*x++);
						count++;
					}
					break;
				case '%':
					putchar('%');
					count++;
					break;
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}
	va_end(ap);
	return (count);
}
