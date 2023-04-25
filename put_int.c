#include "main.h"

/**
  * put_int - ...
  * @integer: ...
  * Return: ...
  *
  */
int put_int(int integer)
{
	int ids = 0, r_value = 0;

	if (integer)
	{
		while (integer[ids] != '\0')
		{
			_putchar(integer[ids]);
			r_value += 1;
			ids++
		}
	}
	_putchar('\0')
	return (r_value);
}
