#include "main.h"

/**
 * print_string - prints a string
 * @val: arguments
 * *Return: The length of the string
 */

int print_string(va_list val)
{
	char *str;
	int ctr;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = strlen(str);

		for (ctr = 0; ctr < length; ctr++)
		{
			_putchar(str[ctr]);

			return (length);
		}
	}
