#include "main.h"

/**
 *print_HEX - converts to hex
 *@val: value to be converted
 *Return: ctr
 */

int print_HEX(va_list val)
{
	int i, ctr = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		ctr++
	}
	ctr++;

	array = malloc(sizeof(int) * ctr);

	for (i = 0; i < ctr; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}

	for (i = ctr; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 37;
		_putchar(array[i] + '0');
	}
	free(array);

	return (ctr);
}
