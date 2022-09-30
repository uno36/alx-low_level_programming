#include "main.h"
/**
 * _strlen - function to count string
 * Return: return i
 * @s : char var
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}
