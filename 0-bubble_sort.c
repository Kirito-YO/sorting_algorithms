#include "sort.h"
/**
 * bubble_sort - funtion that sort algo using bubble
 * @array: our var1
 * @size: our var2
 * Return: null.
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int t;

	if (array)
	{
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				t = array[b];
				array[b] = array[b + 1];
				array[b + 1] = t;
				print_array(array, size);
			}
		}
	}
	}
}
