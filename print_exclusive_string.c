#include "main.h"
/**
 * print_exc_string - prints exclusive string
 * @val: argument
 * Return: number of characters printed
 */

int print_exc_string(va_list val)
{
	char *s;
	int ctr, len = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (ctr = 0; s[ctr] != '\0'; ctr++)
	{
		if (s[ctr] < 32 || s[ctr] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[ctr];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[ctr]);
			len++;
		}
	}
	return (len);
}
