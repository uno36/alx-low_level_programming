#include "main.h"
/**
 * _strncat - concatenate strings
 * Return: returns dest
 * @dest: arguments
 * @scr: arguments
 * @n: int arg
*/

char *_strncat(char *dest, char *scr, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; scr[j] != '\0' && n--; j++)
	dest[i + j] = scr[j];

	dest[i + j] = '\0';
	return (dest);
}
