#include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100
 *
 * Return: alway zero
 */

int main()
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz\n ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz\n ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz\n ");
		}
		else 
		{
			printf("%d ", number);
		}

		return (0);
	}
}
