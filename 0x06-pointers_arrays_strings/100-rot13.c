#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 *
 * @c: char pointer
 *
 * Return: string encoded
 */
char *rot13(char *c)
{
	char target[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char replace[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int size, s_targ;

	for (size = 0; c[size] != '\0'; size++)
	{
	for (s_targ = 0; target[s_targ] != '\0'; s_targ++)
	{
	if (target[s_targ] == c[size])
	{
	c[size] = replace[s_targ];
	break;
	}
	}
	}

	return (c);
}
