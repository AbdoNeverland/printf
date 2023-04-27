#include "main.h"
/**
 * _putchar - print a char
 *@c: char to print
 * Return: void
 */
void _putchar(char c)
{
	putchar(c);
}
/**
 * print_c- prints a char
 * @format: string
 * @ii: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 */
void print_c(__attribute__((unused)) const char *const format,
			 __attribute__((unused)) int ii, va_list ap, int *nb_printed)
{
	_putchar((va_arg(ap, int)));
	(*nb_printed)++;
}
/**
 * print_string - prints a string
 * @format: string
 * @ii: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 */
void print_string(__attribute__((unused)) const char *const format,
				  __attribute__((unused)) int ii, va_list ap, int *nb_printed)
{
	int i = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	while (str && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	};
	*nb_printed += i;
}
/**
 * print_rstring - print reversed string
 * @format: string
 * @ii: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 * Return: void
 */
void print_rstring(__attribute__((unused)) const char *const format,
				   __attribute__((unused)) int ii, va_list ap, int *nb_printed)
{
	int i = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		(*nb_printed)++;
		i--;
	};
}
/**
 * print_rot13 - encode to rot 13
 * @format: string
 * @ii: iterator
 * @ap: va_list
 * @nb_printed: the length of the passed string
 * Return: void
 */
void print_rot13(__attribute__((unused)) const char *const format,
				 __attribute__((unused)) int ii, va_list ap, int *nb_printed)
{
	int j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	while (str && str[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				break;
			}
		}
		if (a[j] == '\0')
			_putchar(str[i]);

		i++;
	};
	*nb_printed += i;
}
