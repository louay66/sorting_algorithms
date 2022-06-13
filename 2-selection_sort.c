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
 * selection_sort - sort an array in ascending using the Selection sort
 * @array: table of array
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
size_t jMin, i, j;

if (size < 2 || array == NULL)
return;
for (i = 0; i < size - 1; i++)
{
jMin = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[jMin])
{
jMin = j;
}
}
if (array[jMin] != array[i])
{
swap(&array[jMin], &array[jMin]);
print_array(array, size);
}
}
}
