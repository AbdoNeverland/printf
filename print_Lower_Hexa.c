#include "main.h"

/**
 * print_Lower_Hexa - prints a lower hexadecimal
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_Lower_Hexa(unsigned int n, int *nb_printed)
{
int a = n % 16;

if (n == 0)
{
putchar('0');
(*nb_printed)++;
return;
}
if (n > 0)
{
if (a < 10)
{
print_Upper_Hexa(n / 16, nb_printed);
_putchar(a + '0');
(*nb_printed)++;
}
else
{
print_Upper_Hexa(n / 16, nb_printed);
_putchar(a + '7' - 'A' + 'a');
(*nb_printed)++;
}
}
}
