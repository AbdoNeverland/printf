#include "main.h"
/**
 * print_b - convert and print a number to binary
 *@n: number to convert
 *@nb_printed: number of characters printed
 * Return: void
 */
void print_b(unsigned int n, int *nb_printed)
{
	if (n / 2 > 0)
		print_b(n / 2, nb_printed);
	_putchar('0' + n % 2);
	(*nb_printed)++;
}
