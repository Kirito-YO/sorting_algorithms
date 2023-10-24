#include "sort.h"
/**
  * quick_sort - quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort_rec_alg(array, 0, size - 1, size);
}

/**
  * sort_rec_algo - sorting algorithm (recursive)
  * @arr: VAR1
  * @left: VAR2
  * @right: VAR3
  * @size: VAR4
  */
void sort_rec_alg(int *arr, int left, int right, size_t size)
{
	int p;

	if (left < right)
	{
		p = sp(arr, left, right, size);
		sort_rec_alg(arr, left, p - 1, size);
		sort_rec_alg(arr, p + 1, right, size);
	}
}

/**
  * sp - split array
  * @arr: VAR1
  * @left: VAR2
  * @right: VAR3
  * @size: VAR4
  * Return: p index
  */
int sp(int *arr, int left, int right, size_t size)
{
	int a, b, p, t;

	p = arr[right];
	a = left;

	for (b = left; b < right; b++)
	{
		if (arr[b] < p)
		{
			if (a != b)
			{
				t = arr[b];
				arr[b] = arr[a];
				arr[a] = t;
				print_array(arr, size);
			}
			a++;
		}
	}
	if (arr[a] != arr[right])
	{
		t = arr[a];
		arr[a] = arr[right];
		arr[right] = t;
		print_array(arr, size);
	}

	return (a);
}
