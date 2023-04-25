#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *_task1- function to print
  *@format: format to print
  *Return: the specific format
  */
int _task1(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list ap;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'd':
					printf("%d", va_arg(ap, int));
					count++;
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					count++;
					break;
				default:
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

