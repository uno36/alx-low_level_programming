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
	int r;
	char deer;

	for (r = '0'; r <= '9'; r++)
		putchar(r);
	for (deer = 'a'; deer <= 'f'; deer++)
		putchar(deer);
	putchar('\n');

	return (0);
}
