#include "main.h"

/**
 * displayNumber - display a number
 *
 * @number: number to show
 *
 * Return: int - result of addition
 */
void displayNumber(int number)
{
	int lastDigit;

	if (number < 0)
	{
	_putchar('-');
	number *= -1;
	}

	lastDigit = number % 10;

	if (number >= 10)
	{
	number /= 10;
	displayNumber(number);
	}

	_putchar(lastDigit + '0');
}

/**
 * squareTable - display a square table
 *
 * @n: square number
 */
void squareTable(int n)
{
	int column, row, number;

	for (row = 0; row <= n; row++)
	{
	for (column = 0; column <= n; column++)
	{
	number = column * row;

	if (column > 0 && number >= 0 && number < 10)
	{
	_putchar(' ');
	}
	if (column > 0 && number >= 0 && number < 100)
	{
	_putchar(' ');
	}
	displayNumber(number);
	if (column < n)
	{
	_putchar(',');
	_putchar(' ');
	}
	}

	_putchar('\n');
	}
}

/**
 * print_times_table - display n square table
 *
 * @n: square table number
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
	squareTable(n);
	}
}
