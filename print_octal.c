#include "main.h"

/**
 * print_octal_recursive - prints an octal
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_octal_recursive(unsigned int n, int *nb_printed)
{
	if (n > 8)
	{
		print_octal_recursive(n / 8, nb_printed);
	}

	_putchar((n % 8) + '0');
	if (nb_printed)
		(*nb_printed)++;
}
/**
 * print_octal - prints an octal
 * @format: string
 * @ii: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 */
void print_octal(__attribute__((unused)) const char *const format,
__attribute__((unused))int ii, va_list ap, int *nb_printed)
{
	unsigned int n = va_arg(ap, int);

	print_octal_recursive(n, nb_printed);
}
