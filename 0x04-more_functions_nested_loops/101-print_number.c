#include "main.h"

/**
 *  * print_number - Prints an integer
 * @n: Integer to consider
 * Return: void
*/

void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
	_putchar(45);
	number = -n;
	}
	else
	number = n;
	if (number / 10)
	print_number(number / 10);
	_putchar((number % 10) + 48);
}
