#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
