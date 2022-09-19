#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: char pointer
 *
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
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: char pointer
 * Return: Size of the string
 */
void puts2(char *str)
{
	int size = _strlen(str);
	int i;

	for (i = 0; i < size; i = i + 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
