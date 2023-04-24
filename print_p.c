#include "main.h"
/**
 * print_x - convert and print a number to hex
 *@n: number to convert
 *@nb_printed: number of printed char
 * Return: void
 */
void print_x(long int n, int *nb_printed)
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
 * print_p - print a variable's adresse
 *@var: the variable
 *@nb_printed:number of printed character
 * Return: void
 */
void print_p(void *var, int *nb_printed)
{
	char *nil = "(nil)";
	int i;

	if (var)
	{
		putchar('0');
		putchar('x');
		(*nb_printed) += 2;
		print_x((long int)var, nb_printed);
	}
	else
	{
		for (i = 0; nil[i]; i++)
		{
			putchar(nil[i]);
			(*nb_printed)++;
		}
	}
}
