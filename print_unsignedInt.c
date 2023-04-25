#include "main.h"

/**
 * print_unsignedInt_recursive - prints an unsignedInteger
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_unsignedInt_recursive(unsigned int n, int *nb_printed)
{
	if (n >= 10)
	{
		print_unsignedInt_recursive(n / 10, nb_printed);
	}
	putchar(n % 10 + '0');
	if (nb_printed)
		(*nb_printed)++;
}
/**
 * print_unsignedInt - prints an unsignedInteger
 * @format: string
 * @ii: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 */
void print_unsignedInt(__attribute__((unused)) const char *const format,
__attribute__((unused))int ii, va_list ap, int *nb_printed)
{
	unsigned int n = va_arg(ap, int);

	print_unsignedInt_recursive(n, nb_printed);
}
