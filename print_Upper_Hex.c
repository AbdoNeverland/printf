#include "main.h"

/**
 * print_Upper_Hexa - prints an upper hexadecimal
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_Upper_Hexa(unsigned int n, int *nb_printed)
{
	char hex_digits[] = "0123456789ABCDEF";
	char hex_num[32];
	int num_digits = 0, i;

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
