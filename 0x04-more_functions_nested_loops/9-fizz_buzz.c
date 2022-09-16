#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if ((i % 3) == 0)
printf("Fizz");
else if ((i % 5) == 0)
printf("Buzz");
else
printf("%d", i);
printf(" ");
}
return (0);
}
