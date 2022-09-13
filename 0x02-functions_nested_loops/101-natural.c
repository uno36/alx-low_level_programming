#include <stdio.h>
/**
 * multiple - return sum of 3 and 5 multiple
 *
 * @limit: limit for loop
 *
 * Return: int - sum.
 */
int multiple(int limit)
{
	int n, sum = 0;

	for (n = 1; n < limit; n++)
	{
	if (n % 3 == 0 || n % 5 == 0)
	{
	sum += n;
	}
	}

	return (sum);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = multiple(1024);

	printf("%d\n", n);

	return (0);
}
