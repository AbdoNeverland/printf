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

	va_start(ap, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			switch (format[i])
			{
				case 'd':
				case 'i':
					print_int(va_arg(ap, int), &nb_printed);
					break;
				case 'b':
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
					if (format[i] != '%')
						_putchar(format[i]), nb_printed++;
					nb_printed++;
			}
		}
		else
		{
			_putchar(format[i]);
			nb_printed++;
		}
	}
	va_end(ap);
	return (format == NULL ? -1 : nb_printed);
}
