#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * _printf- produces given output
  * @format: format to print
  * Return: the output in a specific format
  *
  */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, c;
	char *x;
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c =  va_arg(ap, int);
					putchar(c);
					count++;
					break;
				case 's':
					x = va_arg(ap, char *);
					if (!x)
						x = "(nil)";
					while (*x)
					{
						putchar(*x);
						count++;
						x++;
					}
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					i--;
					break;
			}
		}
<<<<<<< HEAD
		else
		{
			putchar(format[i]);
			count++;
		}
		i++;
=======
>>>>>>> 3fb18b5a2e0ff220f04a05a10cd1da8ab86be9cf
	}
	va_end(ap);
	return (count);
}

