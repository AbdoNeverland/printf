#include "main.h"
/**
 * print_b_recursive - convert and print a number to binary
 *@n: number to convert
 *@nb_printed: number of characters printed
 * Return: void
 */
void print_b_recursive(unsigned int n, int *nb_printed)
{
	if (n / 2 > 0)
		print_b_recursive(n / 2, nb_printed);
	_putchar('0' + n % 2);
	(*nb_printed)++;
}
/**
 * print_b - convert and print a number to binary
 * @format: string
 * @i: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 * Return: void
 */
void print_b(__attribute__((unused)) const char *const format,
__attribute__((unused)) int i, va_list ap, int *nb_printed)
{
	unsigned int n = va_arg(ap, unsigned int);

	print_b_recursive(n, nb_printed);
}
