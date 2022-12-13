#include "main.h"
/**
 * _strncpy - function to copy strings from src to dest
 * Return: return dest
 * @dest: function argument
 * @src: function argument
 * @n: function argument
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
