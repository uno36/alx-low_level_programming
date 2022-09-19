#include "main.h"
/**
 * swap_int - swap between integer
 * Return : no return value
 * @a : local variable
 * @b : local variable
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
