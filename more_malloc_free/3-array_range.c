#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 *
 * @min: min value
 * @max: max value
 *
 * Return: return the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;


	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);


	if (arr  == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
