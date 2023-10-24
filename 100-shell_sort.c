#include "sort.h"
/**
  * sort_by_shell - shell sort, k sequence
  * @array: VAR1
  * @size: VAR2
  */
void sort_by_shell(int *array, size_t size)
{
	size_t k, a, b;
	int t;

	k = 1;
	while (k < size)
		k = (k * 3) + 1;
	k = (k - 1) / 3;
	while (k > 0)
	{
		for (a = k; a < size; a++)
		{
			t = array[a];
			for (b = a; b >= k && array[b - k] > t; b -= k)
				array[b] = array[b - k];
			array[b] = t;
		}
		k = (k - 1) / 3;
		print_array(array, size);
	}
}
