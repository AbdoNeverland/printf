#include "main.h"

/**
 * print_Lower_Hexa - prints a lower hexadecimal
 * @format: string
 * @ii: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 */
void print_Lower_Hexa(__attribute__((unused)) const char *const format,
__attribute__((unused))int ii, va_list ap, int *nb_printed)
{
	char hex_digits[] = "0123456789abcdef";
	char hex_num[32];
	int num_digits = 0, i;
	unsigned int n = va_arg(ap, int);

	if (n == 0)
	{
		putchar('0');
		(*nb_printed)++;
		return;
	}

	while (n != 0)
	{
		hex_num[num_digits++] = hex_digits[n % 16];
		n /= 16;
	}

	for (i = num_digits - 1; i >= 0; i--)
	{
		putchar(hex_num[i]);
		(*nb_printed)++;
	}
}
