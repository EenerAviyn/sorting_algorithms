#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order using Bubble
 * sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp = 0, flag = 1;

	if (!array || !size)
		return;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
	}
}
