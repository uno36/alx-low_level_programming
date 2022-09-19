#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char pointer
 * Return: Size of the string
*/
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
	size++;
	s++;
	}

	return (size);
}

/**
 * print_rev - prints a string, in reverse
 * @s: char pointer
*/
void print_rev(char *s)
{
	int length = _strlen(s) - 1;

	while (length >= 0)
	{
	_putchar(s[length]);
	length--;
	}
	_putchar('\n');
}
