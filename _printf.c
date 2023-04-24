#include "main.h"
/**
 * handle_conversion - handle conversion specifiers
 *@format: format
 *@i: iterator position
 *@ap: va_list
 *@nb_printed: number of printed char
 */
void handle_conversion(const char *const format,
		int i, va_list ap, int *nb_printed)
{
	switch (format[i])
	{
		case 'p':
			print_p(va_arg(ap, void *), nb_printed);
			break;
		case 'b':
			print_b(va_arg(ap, int), nb_printed);
			break;
		case 'c':
			_putchar((va_arg(ap, int)));
			(*nb_printed)++;
			break;
		case 's':
			print_string(va_arg(ap, char *), nb_printed);
			break;
		case 'S':
			print_S(va_arg(ap, char *), nb_printed);
			break;
		case 'r':
			print_rstring(va_arg(ap, char *), nb_printed);
			break;
		case 'd':
		case 'i':
			print_int(va_arg(ap, int), nb_printed);
			break;
		case 'u':
			print_unsignedInt(va_arg(ap, int), nb_printed);
			break;
		case 'o':
			print_octal(va_arg(ap, int), nb_printed);
			break;
		case 'x':
		print_Lower_Hexa(va_arg(ap, int), nb_printed);
			break;
		case 'X':
		print_Upper_Hexa(va_arg(ap, int), nb_printed);
			break;
		default:
			_putchar('%');
			if (format[i] != '%')
				_putchar(format[i]), (*nb_printed)++;
			(*nb_printed)++;
	}
}
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
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				nb_printed = -1;
				break;
			}
			i++;
			handle_conversion(format, i, ap, &nb_printed);
		}
		else
			_putchar(format[i]), nb_printed++;

	}
	va_end(ap);
	return (format == NULL ? -1 : nb_printed);
}
