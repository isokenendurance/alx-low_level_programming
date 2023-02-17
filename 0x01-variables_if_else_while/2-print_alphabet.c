#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabets in lowercase
 * Return: 0 (successful)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
return (0);
}
