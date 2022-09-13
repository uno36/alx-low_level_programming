#include <stdio.h>

/**
 * fibonacci - calcul fibonacci result
 *
 * @limit: limit for loop
 * @memory: result of previous fibonacci
 *
 * Return: int - fibonacci number.
 */
int fibonacci(int limit, int memory[])
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
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int number = 0, sum = 0;
	int memory[100];

	while (sum < 4000000)
	{
	memory[number] = fibonacci(number, memory);

	if (memory[number] % 2 == 0)
	{
	sum += memory[number];
	}

	number++;
	}

	printf("%d\n", sum);

	return (0);
}
