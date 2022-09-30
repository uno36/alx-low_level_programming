#include "main.h"
/**
 * _strcat - concatenate strings
 * Return: returns dest
 * @dest: arguments
 * @scr: arguments
*/

char *_strcat(char *dest, char *scr)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; scr[j] != '\0'; j++)
	dest[i + j] = scr[j];

	dest[i + j] = '\0';
	return (dest);
}
