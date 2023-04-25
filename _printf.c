#include "main.h"

/**
  * _printf - implementing the printf function
  * @format: ...
  * Return: ...
  *
  */
int _printf(const char *format, ...)
{
	unsigned int i = 0, ex_res = 0;

	va_list args;

	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			int r_value = put_str(va_arg(args, char *));

			i++;
			ex_res += (r_value - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
		{
			get_int(va_arg(args, int));
			i++;
		}
		ex_res += 1;
	}
	return (ex_res);
}
