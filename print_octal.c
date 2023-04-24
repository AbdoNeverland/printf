#include "main.h"

/**
 * print_octal - prints an octal
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_octal(unsigned int n, int *nb_printed)
{
	if (n > 8)
	{
		print_octal(n / 8, nb_printed);
	}

	_putchar((n % 8) + '0');
	(*nb_printed)++;
}
