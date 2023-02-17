#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in uppecase and lowercase
 * Return: 0 (successful)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
		putchar('\n');
return (0);
}
