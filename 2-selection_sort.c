#include "sort.h"

/**
 * selection_sort - sort array using selection sort algorithm
 * @array: array to be sorted
 * @size: array size
 **/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;
	int interm;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			interm = array[i];
			array[i] = array[min];
			array[min] = interm;
			print_array(array, size);
		}
	}
}
