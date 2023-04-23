#include "main.h"
/**
 * print_int - prints an integer
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_int(long int n, int *nb_printed)
{
	if (n < 0)
	{
		_putchar('-');
		if (nb_printed)
			(*nb_printed)++;
		n *= -1;
	}
	if (n > 9)
		print_int(n / 10, nb_printed);
	_putchar('0' + n % 10);
	if (nb_printed)
		(*nb_printed)++;
}
