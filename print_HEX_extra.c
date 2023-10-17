#include "main.h"

/**
 * print_HEX_extra - prints an hexgecimal number.
 * @num: arguments.
 * Return: ctr.
 */
int print_HEX_extra(unsigned long int num)
{
	long int i;
	long int *array;
	long int ctr = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		ctr++;
	}
	ctr++;
	array = malloc(ctr * sizeof(long int));

	for (i = 0; i < ctr; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = ctr - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (ctr);
}
