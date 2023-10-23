#include "sort.h"
/**
 * selection_sort - function sorts array of integers in using selection
 * @array: var1
 * @size: var2
 * Return: null.
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, m, t;

	if (array)
	{
	for (a = 0; a < size; a++)
	{
		m = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[m] > array[b])
			{
				m = b;
			}
		}
		if (m != a)
		{
			t = array[a];
			array[a] = array[m];
			array[m] = t;
			print_array(array, size);
		}
	}
	}
}
