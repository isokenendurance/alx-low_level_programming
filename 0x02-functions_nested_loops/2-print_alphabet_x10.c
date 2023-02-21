#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10times in lower case
 * Return: 0 (successful)
 */

void print_alphabet_x10(void)
{
	int n;
	char l;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
			_putchar(l);
		_putchar('\n');
	}
}
