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
	int num;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'd':
					num = va_arg(ap, int);
					printf("%d%d", num, num);
					count += 2;
					i++;
					break;
				case 'i':
					num = va_arg(ap, int);
					printf("%i%i", num, num);

					count += 2;
					i++;
					break;
				default:
					putchar(format[i]);
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

