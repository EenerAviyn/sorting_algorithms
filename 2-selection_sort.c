#include "sort.h"

/**
 * selection_sort - sorts array of integers in ascending order using
 * selection sort algorithm
 * @array: array of integers.
 * @size: size of the array.
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	int minIndex, currIndex = 0, temp;

	if (!array || !size)
		return;

	while (currIndex < (int)size)
	{
		minIndex = currIndex;
		for (i = currIndex + 1; i < size; i++)
		{
			if (array[i] < array[minIndex])
				minIndex = i;
		}
		if (currIndex != minIndex)
		{
			temp = array[minIndex];
			array[minIndex] = array[currIndex];
			array[currIndex] = temp;
			print_array(array, size);
		}
		currIndex++;
	}
}
