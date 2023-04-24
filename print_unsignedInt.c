#include "main.h"

/**
 * print_unsignedInt - prints an unsignedInteger
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_unsignedInt(unsigned int n, int *nb_printed)
{
unsigned int a = 4294967295;

if (!n)
{
a +=  (n + 1);
print_unsignedInt(a, nb_printed);
}
if (n / 10)
{
print_unsignedInt(n / 10, nb_printed);
}
_putchar(n % 10 + '0');
(*nb_printed)++;
}
