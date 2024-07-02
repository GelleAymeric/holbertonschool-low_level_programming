#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of 
 * the two diagonals of a square matrix of integers.
 *
 * @a: A pointer to the first element of the array
 * @size: size of matrix
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0 , sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + i - 1];
	}
	printf("%d, %d,\n", sum1, sum2);

}
