#include "sort.h"

/**
 * bubble_sort - Sort an array with buble sort algorithm
 * @array: Array that going to be sorted
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int interm;

	if (!array || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				interm = array[j];
				array[j] = array[j + 1];
				array[j + 1] = interm;
				print_array(array, size);
			}
		}
	}
}
