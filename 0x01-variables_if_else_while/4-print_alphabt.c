#include <stdio.h>
/**
 * main - prints alphabets in lowercase
 * Return: 0 (successful)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		if (lc != 'e' && lc != 'q')
			putchar(lc);

	putchar('\n');
return (0);
}
