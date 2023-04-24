#include "main.h"
/**
 * print_hex - prints hex value
 *@n: number to print
 * Return: void
 */
void print_hex(long int n)
{
	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	if (n / 16 > 0)
		print_hex(n / 16);
	if (n % 16 < 10)
		putchar('0' + n % 16);
	else
		putchar('A' + n % 16 - 10);
}
/**
 * print_S - print string with non printable characters
 *@str: the string to print
 *@nb_printed: increment number of char printed
 * Return: void
 */
void print_S(char *str, int *nb_printed)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str && str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			/*printf("\n%d %c\n", str[i] ,str[i]);*/
			if (str[i] <= 15)
				_putchar('0');
			print_hex(str[i]);
		}
		else
			_putchar(str[i]);
		i++;
	};
	*nb_printed += i;
	_putchar('\n');
}
