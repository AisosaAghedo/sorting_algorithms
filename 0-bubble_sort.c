#include "sort.h"
/**
 * bubble_sort - function that sorts an array using the bubble sort method
 * @array: unsorted array
 * @length: length of the array to be sorted
 */
void bubble_sort(int *array, size_t length)
{
	size_t i, length, temp;

	if (length < 2 || array == NULL)
		return;
	while (1)
	{
		checker = 0;
		for (i = 1; i < length; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				check = 1;
				print_array(array, size);
			}
		}
		if (check == 0)
			break;
	}
}
