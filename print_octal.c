#include "main.h"

/**
 * print_octal - prints an octal
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_octal(unsigned int n, int *nb_printed)
{
	if (n == 0)
	{
		putchar('0');
		(*nb_printed)++;
		return;
	}

	int digits[32] = { 0 };
	int num_digits = 0;

	while (n != 0)
	{
		digits[num_digits++] = n % 8;
		n /= 8;
	}

	for (int i = num_digits - 1; i >= 0; i--)
	{
		putchar(digits[i] + '0');
		(*nb_printed)++;
	}
}
