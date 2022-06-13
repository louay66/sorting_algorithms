#include "sort.h"

/**
 * swap - function that swap tow number
 * @xp: first nmber
 * @yp: second number
 *
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - function sort an array in ascending using the Bubble sort
 * @array: table of array
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);

				print_array(array, size);
			}
		}
	}
}
