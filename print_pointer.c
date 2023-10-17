#include "main.h"
/**
 * print_pointer - prints pointer
 * @val: value
 * Return: int
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "(null)";
	long int a;
	int ctr, b;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (ctr = 0; s[ctr] != '\0'; ctr++)
			_putchar(s[ctr]);
		return (ctr);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_extra(a);
	return (b + 2);
}
