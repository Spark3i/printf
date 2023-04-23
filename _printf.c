#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *_printf- produces given output
  *@format: format to print
  *Return: the output in a specific format
  */
int _printf(const char *format, ...)
{
	int i = 0;
	char *x;
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 's':
					x = va_arg(ap, char *);
					if (!x)
						x = "(nil)";
					printf("%s", x);
					break;
				case '%':
					printf("%%");
					break;
				default:
					i++;
					continue;
			}
		}
		
	}
	va_end(ap);
	return (0);
}

