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
 * @format: string
 * @ii: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 * Return: void
 */
void print_S(__attribute__((unused)) const char *const format,
__attribute__((unused))int ii, va_list ap, int *nb_printed)
{
	int i = 0;
	char *str = va_arg(ap, char *);

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
			*nb_printed += 3;
		}
		else
			_putchar(str[i]);
		i++;
	};
	*nb_printed += i;
}
