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
 * print_string - print a string
 *@str: the string to print
 *@nb_printed: increment number of char printed
 * Return: void
 */
void print_string(char *str, int *nb_printed)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str && str[i] != '\0')
	{
		_putchar(str[i]);
			i++;
	};
	*nb_printed += i;
}
