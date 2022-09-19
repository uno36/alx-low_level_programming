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
 * rev_string - reverses a string
 * @s: char pointer
 * Return: Size of the string
*/
void rev_string(char *s)
{
	int size = _strlen(s);
	int right = size - 1;
	int left, limit;
	char temp;

	limit = (size % 2 == 0) ? (size + 1) / 2 : size / 2;

	for (left = 0; left < limit; left++)
	{
	temp = s[left];
	s[left] = s[right];
	s[right] = temp;
	right--;
	}
}
