#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the squate
 * Return: no return.
 */
void print_square(int size)
{
	int i;
	int c;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}
	for (i = 0; i < size; i++)
	{
	for (c = 0; c < size; c++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
