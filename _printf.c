#include "main.h"

/**
 * print_percent -  print  %
 *@c: char after %
 *@nb_printed: int
 * Return: void.
 */
void print_percent(char c, int *nb_printed)
{
	_putchar('%');
	if (c != '%')
	{
		_putchar(c);
		(*nb_printed)++;
	}
	(*nb_printed)++;
}
/**
 * _printf - alternative to printf
 *@format: format
 * Return: int
 */
int _printf(const char *const format, ...)
{
	va_list ap;
	spe_fun AllSpeFun[] = {
		{'p', print_p}, {'s', print_string}, {'d', print_int}, {'i', print_int},
		{'S', print_S}, {'b', print_b}, {'c', print_c}, {'u', print_unsignedInt},
		{'o', print_octal}, {'x', print_Lower_Hexa}, {'X', print_Upper_Hexa},
		{'r', print_rstring}, {'R', print_rot13}};
	int i = 0, k, nb_printed = 0;
	int nb_of_function = sizeof(AllSpeFun) / sizeof(spe_fun);

	va_start(ap, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				nb_printed = -1;
				break;
			}
			i++;
			for (k = 0; k < nb_of_function; k++)
			{
				if (format[i] == AllSpeFun[k].specifier)
				{
					AllSpeFun[k].function(format, i, ap, &nb_printed);
					break;
				}
			}
			if (k == nb_of_function) /*no specifier is founded*/
			{
				print_percent(format[i], &nb_printed);
			}
		}
		else
			_putchar(format[i]), nb_printed++;
	}
	va_end(ap);
	return (format == NULL ? -1 : nb_printed);
}
