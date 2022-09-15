#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: times character should b printed
 * Return: no return.
 */
void print_line(int n)
{
	char c;

	if (n > 0)
	for (c = 0; c < n; c++)
	{
	_putchar (95);
	}
	_putchar ('\n');
}
