#include "main.h"

/**
  * get_int - ...
  * @num: ...
  * Return: ...
  *
  */
int get_int(int num)
{
	int n, r_value = 0;

	if (num == 0)
	{
		return (0);
	}
	else
	{
		n = num / 10;
	}
	r_value += 1;
	get_int(n);
	_putchar(num % 10 + '0');
	return (r_value);
}
