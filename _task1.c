#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers - prints integers
  *@n: int to print
  *Return: number of int printed
  */
int print_numbers(int n)
{
	unsigned int num;
	int j, count = 0;

	if (n < 0)
	{
		putchar('-');
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}
	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	while (num != 0)
	{
		j = num % 10;
		putchar('0' + j);
		num /= 10;
		count++;
	}
	return (count);
}
/**
  *_task1- function to print
  *@format: format to print
  *Return: the specific format
  */
int _print(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'd':
					count += print_numbers(va_arg(ap, int));
					break;
				case 'i':
					count += print_numbers(va_arg(ap, int));
					break;
				default:
					putchar(format[i]);
					count++;
					break;
			}
			i++;
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

