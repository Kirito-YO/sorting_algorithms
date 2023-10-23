#include "sort.h"
/**
 * partition_array - function that do a partitions array
 * @array: VAR1
 * @l: VAR2
 * @r: VAR3
 * @n: VAR4
 * Return: INT.
 */
int partition_array(int *array, int l, int r, size_t n)
{
	int t, p, a, f;

	p = array[r];
	a = l - 1;

	for (f = l; f <= r - 1; f++)
	{
		if (p > array[f])
		{
			a++;
			t = array[a];
			array[a] = array[f];
			array[f] = t;
		}
	}
	print_array(array, n);
	t = array[a + 1];
	array[a + 1] = p;
	array[r] = t;

	return (a + 1);
}
/**
 * sort_rec_array - function that recursively sorts array
 * @array: var1
 * @l: VAR2
 * @r: VAR3
 * @size: var4
 * Return: Null
 */
void sort_rec_array(int *array, int l, int r, size_t size)
{
	int a;

	if (l < r)
	{
		a = partition_array(array, l, r, size);
		sort_rec_array(array, l, a - 1, size);
		sort_rec_array(array, a + 1, r, size);
	}
}
/**
 * quick_sort - fucntion that :sorts array of integers using quick
 * @array: VAR1
 * @size: VAR2
 * Return: null.
 */
void quick_sort(int *array, size_t size)
{
	if (array)
	{
		sort_rec_array(array, 0, size - 1, size);
	}
}
