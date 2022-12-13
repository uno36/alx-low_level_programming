#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source to copy
 * @n: bytes
 * Return: poitner to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
