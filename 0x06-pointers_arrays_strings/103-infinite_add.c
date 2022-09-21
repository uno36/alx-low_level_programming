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
 * isDigit - check if a character is a digit
 *
 * @c: character
 *
 * Return: true if successful
 */
int isDigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * getCharN - get character at N position
 *
 * @c: character
 * @n: position
 *
 * Return: character
 */
char getCharN(char *c, int n)
{
	int size = _strlen(c);
	char ch = (size >= n) ? (c[size - 1 - n]) : '0';

	return (isDigit(ch) ? ch : '0');
}

/**
 * addChar - add char digit
 *
 * @c1: character
 * @c2: position
 *
 * Return: number
 */
int addChar(char c1, char c2)
{
	return ((c1 - 48) + (c2 - 48));
}

/**
 * infinite_add - add two char number
 *
 * @n1: character number
 * @n2: char number
 * @r: buffer
 * @size_r: size of the buffer
 *
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int cLoop, rcLoop, result, next = 0;
	char temp[size_r], c1, c2;

	for (cLoop = 0; cLoop < size_r; cLoop++)
	{
	temp[cLoop] = '\0';
	r[cLoop] = '\0';
	}
	for (cLoop = 0; cLoop < size_r; cLoop++)
	{
	c1 = getCharN(n1, cLoop);
	c2 = getCharN(n2, cLoop);
	result = (((temp[cLoop] == '\0') ? '0' : temp[cLoop]) - 48);
	result += addChar(c1, c2);
	temp[cLoop] = (result % 10) + 48;
	if (result > 9)
	{
	temp[cLoop + 1] = (result / 10) + '0';
	}
	}
	rcLoop = size_r - 1;
	for (cLoop = 0; cLoop < (size_r + 1) / 2; cLoop++)
	{
	if (temp[rcLoop - cLoop] == '0' && next == 0)
	{
	rcLoop--;
	cLoop--;
	continue;
	}
	else
	{
	next = 1;
	c1 = temp[cLoop];
	r[cLoop] = temp[rcLoop - cLoop];
	r[rcLoop - cLoop] = c1;
	}
	}
	if (r[size_r - 1] != '\0')
	return (0);
	return (r);
}









