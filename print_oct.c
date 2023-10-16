#include "main.h"
/**
 * print_oct - converts to octal
 * @val: parameter
 * Return: ctr
 */

int print_oct(va_list val)
{
	int i, ctr = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;
	
	while (num / 8 != 0)
	{
		num = num / 8;
		ctr++;
	}
	ctr++;


	array = malloc(sizeof(int) * ctr);

	for (i = 0; i < ctr; i++)
	{
		array[i] = tem % 8;
		tem = tem / 8;
	}

	for (i = ctr - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);

	return (ctr);
}

