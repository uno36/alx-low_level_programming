#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: times character is printed
 * Return: no return.
 */
void print_diagonal(int n)
{
	int c;
	int spac;

	for (c = 0; c < n; c++)
	{
	for (spac = 0; spac < c; spac++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}
