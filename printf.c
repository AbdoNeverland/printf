#include "main.h"
/**
 * _printf - alternative to printf
 *@format: format
 * Return: int
 */
int _printf(const char *const format, ...)
{
	int i = 0, nb_printed = 0;
	va_list ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'd':
				case 'i':
					print_int(va_arg(ap, int), &nb_printed);
					break;
				case 'f':
					/*to complete*/
					break;
				case 'c':
					_putchar((va_arg(ap, int)));
					nb_printed++;
					break;
				case 's':
					print_string(va_arg(ap, char *), &nb_printed);
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					nb_printed += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			nb_printed++;
		}
	}
	va_end(ap);
	return (nb_printed);
}
