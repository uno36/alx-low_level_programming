#include <stdio.h>

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
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: char pointer
 * @src: char pointer
 * Return: char*
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int size = _strlen(src);

	for (i = 0; i < size; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
