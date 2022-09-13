#include <stdio.h>

/**
 * firstDigit - return sum of 3 and 5 multiple
 *
 * @number: number to analyze
 *
 * Return: int - first digit.
 */
int firstDigit(int number)
{
	while (number >= 10)
	{
	number /= 10;
	}

	return (number);
}

/**
 * fibonacci - calcul fibonacci result
 *
 * @limit: limit for loop
 * @memory: result of previous fibonacci
 *
 * Return: int - fibonacci number.
 */
long fibonacci(int limit, long memory[])
{
	if (limit == 0)
	{
	memory[0] = 0;
	}
	else if (limit == 1)
	{
	memory[1] = 1;
	}
	else if (limit >= 2)
	{
	if (!memory[limit - 1])
	{
	memory[limit - 1] = fibonacci(limit - 1, memory);
	}

	if (!memory[limit - 2])
	{
	memory[limit - 2] = fibonacci(limit - 2, memory);
	}
	memory[limit] = memory[limit - 1] + memory[limit - 2];
	}

	return (memory[limit]);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long memory[52];
	int number;

	for (number = 0; number <= 51; number++)
	{
	memory[number] = fibonacci(number, memory);

	if (number >= 2)
	{
	printf("%ld", memory[number]);
	}

	if (number < 51 && number >= 2)
	{
	printf(", ");
	}
	}
	printf("\n");

	return (0);
}
