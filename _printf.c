#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * _printf - implementing the printf function
  * @format: ...
  * Return: ...
  *
  */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	char *x;
	va_list args;

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			x = (va_arg(args, char *));
			if (!x)
				x = "(nil)";
			while (*x)
			{
				putchar(*x);
				x++;
			}
			i++;
		}
		else if (format[i + 1] == '%')
		{
			putchar('%');
			i++;
		}
<<<<<<< HEAD
		else
		{
			putchar(format[i]);
		}
=======
		else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
		{
			get_int(va_arg(args, int));
			i++;
		}
		ex_res += 1;
>>>>>>> 469e03b46d8a913c8ed24f9eca1afa6b55f1c35c
	}
	va_end(args);
	return (i);
}
