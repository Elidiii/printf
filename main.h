#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_per(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned long int num);
int print_exc_string(va_list val);
int print_hex_extra(unsigned long int num);
int print_pointer(va_list val);
int print_srev(va_list args);
int print_rot13(va_list args);

#endif
