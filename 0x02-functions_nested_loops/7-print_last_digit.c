#include "main.h"
/**
 * print_last_digit - function that print last digit
 * @i: function parameter
 * Return: 0
 */

int print_last_digit(int i)
{
	int lc = i % 10;

	if (lc < 0)
		lc *= -1;
	_putchar(lc + '0');
	return (0);
}
