#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: Nothing to return
 */

void print_alphabet_x10(void)
{
int i = 1;
while (i <= 10)
{
char j;
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
i++;
}
}
