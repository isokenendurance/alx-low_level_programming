#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function to generate ramdom numbers
 * Return: 0 (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > o)
	{
		printf("%d is possitive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
return (0);
}
