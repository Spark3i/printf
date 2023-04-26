#include "main.h"
#include <stdio.h>

/**
  * put_str - ...
  * @string: ...
  * Return: integer
  *
  */
int put_str(char *string)
{
	int idx = 0, r_value = 0;

	if (string)
	{
		while (string[idx] != '\0')
		{
			putchar(string[idx]);
			r_value += 1;
			idx++;
		}
	}
	return (r_value);
}
