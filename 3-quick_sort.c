#include "sort.h"

/**
 * quick_sort -Sort an array using quick_sort algorithm
 * @array: array
 * @size: size
 **/

void quick_sort(int *array, size_t size)
{
	size_t pivot;

	if (!array || size < 2)
		return;

	print_sort(array, size, 1);

	/* partition and get pivot index */
	pivot = partition(array, size);

	/* repeat for left of index */
	quick_sort(array, pivot);
	/* repeat for index and right */
	quick_sort(array + pivot, size - pivot);
}
