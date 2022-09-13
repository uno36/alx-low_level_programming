#include "main.h"
/**
 * print_sign - function to check for signs +, 0, -
 * Return: return 1 for +, return 0 for sign and return -1 for -
 * @n : local parameter for the function
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}

}
