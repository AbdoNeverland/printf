#include "main.h"
/**
 * print_x - convert and print a number to hex
 *@n: number to convert
 *@nb_printed: number of printed char
 * Return: void
 */
void print_x(unsigned long n, int *nb_printed)
{
	if (n / 16 > 0)
		print_x(n / 16, nb_printed);
	if (n % 16 < 10)
		putchar('0' + n % 16);
	else
		putchar('a' + n % 16 - 10);
	(*nb_printed)++;
}
/**
 * print_p - prints an adresse
 * @format: string
 * @i: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 */
void print_p(__attribute__((unused)) const char *const format,
__attribute__((unused))int i, va_list ap, int *nb_printed)
{
	char *nil = "(nil)";
	int k;
	void *var = va_arg(ap, void *);

	if (var)
	{
		putchar('0');
		putchar('x');
		(*nb_printed) += 2;
		print_x((unsigned long)var, nb_printed);
	}
	else
		for (k = 0; nil[k] != '\0'; k++)
			putchar(nil[k]), (*nb_printed)++;
}
