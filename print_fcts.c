#include "main.h"
/**
 * _putchar - print a char
 *@nc: char to print
 * Return: void
 */
void _putchar(char c)
{
	putchar(c);
}
/**
 * print_string - print a string
 *@str: the string to print
 *@nb_digit: increment number of char printed
 * Return: void
 */
void print_string(char *str, int *nb_printed)
{
	int i = 0;

	while (str && str[i] != '\0')
	{
		_putchar(str[i]);
			i++;
	};
	*nb_printed += i;
}
/**
 * print_int - print an integer
 *@n: number
 *@nb_digit: increment number of char printed
 * Return: int
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

