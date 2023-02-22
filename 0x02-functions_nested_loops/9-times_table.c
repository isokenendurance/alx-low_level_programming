#include "main.h"
/**
 * times_table - printthe 9 times table
 */

void times_table(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{

		int prod = n * m;

		if (m == 0)
		{
			_putchar('0');
		}
		else if (prod <= 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(prod + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');
		}
		}
		_putchar('\n');
	}
}
