#include <stdio.h>
/**
 * main - prints the alphabets to reverse
 * Return: 0 (successful)
 */
int main(void)
{
	char lc;

	for (lc = 'z' ; lc >= 'a' ; lc--)
		putchar(lc);
	putchar('\n');
return (0);
}
