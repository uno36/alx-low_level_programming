#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: difference between ascii number
 */
int _strcmp(char *s1, char *s2)
{
	int length;

	for (length = 0; s1[length] != 0; length++)
	{
	if (s1[length] - s2[length] != 0)
	return (s1[length] - s2[length]);
	}

	return (0);
}









