#include "main.h"
/**
 * print_int_recursive - prints an integer
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_int_recursive(long int n, int *nb_printed)
{
	if (n < 0)
	{
		_putchar('-');
		if (nb_printed)
			(*nb_printed)++;
		n *= -1;
	}
	if (n > 9)
		print_int_recursive(n / 10, nb_printed);
	_putchar('0' + n % 10);
	if (nb_printed)
		(*nb_printed)++;
}
/**
 * print_int - prints an integer
 * @format: string
 * @i: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 */
void print_int(__attribute__((unused)) const char *const format,
__attribute__((unused)) int i, va_list ap, int *nb_printed)
{
	long int n = va_arg(ap, int);

	print_int_recursive(n, nb_printed);
}
