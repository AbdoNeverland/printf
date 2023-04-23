
/**
 * print_integer - prints an integer
 * @n: integer to be printed
 * @nb_printed: the length of the passed string
 */
void print_integer(int n, int *nb_printed)
{
	int a;
	char c;

	if (n < 0)
	{
		c = '-';
		write(1, &c, 1);
		(*nb_printed)++;
		n *= -1;
	}

	if (n / 10 != 0)
		print_integer(n / 10, nb_printed);

	a = (n % 10) + '0';
	write(1, &a, 1);
	(*nb_printed)++;
}
