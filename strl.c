#include "main.c"
/**
 * _strlen - Returns the length of a string
 * @str: string pointer
 * Return: ctr
 */

int _strlen(char *str)
{
	int ctr;

	for (ctr = 0; str[ctr] != 0; ctr++)
		;
	return (ctr);
}

/*********************************************************************************************************************************************************/
/**
 * _strlenc - strlen function but used for constant character pointer str
 * @str: character pointer
 * Return: ctr
 */

int _strlenc(const char *str)
{
	int ctr;

	for (ctr = 0; str[ctr] != 0; ctr++)
		;
	return (ctr);
}
