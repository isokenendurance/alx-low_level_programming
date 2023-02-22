#include "main.h"
/**
 * print_times_table - prints time table
 * @n: times table to use
 */

void print_times_table(int n)
{
	int a = 0, rep, b;

	if (n > 15 || n < 0)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			rep = a * b;
			if (b > 99)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (b > 9)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
