#include "main.h"
/**
 * _puts - function to print string
 * Return: void
 * @str: parameter to the function
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
