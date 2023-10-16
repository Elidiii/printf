#include "main.h"

/**
 * print_bin - converts to binary
 * @val: argument
 * Return: integer
 */

int print_bin(va_list val)
{
	int flag = 0;
	int i = 0;
	int ctr, a = 1;, b;
	unsigned int num =  va_arg(val, unsigned int);
	unsigned int p;

	for (ctr = 0; ctr < 32; ctr++)
	{
		p = ((a << (32 - ctr)); & num);
		if (p >> (31 - ctr))
			flag = 1;
		if (flag)
		{
			b = p  >> (31 - ctr);
			_putchar(b + '0');
			i++;
		
		}
	}
	if (i == 0)
	{
		i++;
		_putchar('0');
	}
	
	return (i);
}
