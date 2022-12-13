#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be stored
 * Return:  pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
	if (*s == c)
	return (s);
	if (!*s)
	return ('\0');
	}
	return ('\0');
}
