#include "sort.h"

int partition(int *A, int lo, int hi);
void _swap(int a, int b, int *A);
void quick_sortt(int *A, int lo, int hi);
/**
 * quick_sort - calls quick_sortt
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quick_sortt(array, 0, size - 1);
}
/**
 * quick_sortt - sorts using quick sort algorithm
 * @A: array
 * @lo: low
 * @hi: high
 */
void quick_sortt(int *A, int lo, int hi)
{
	int p;

	if (lo < hi)
	{
		p = partition(A, lo, hi);
		quick_sortt(A, lo, p - 1);
		quick_sortt(A, p + 1, hi);
	}
}
/**
 * partition - sorts using quick sort algorithm
 * @A: array
 * @lo: low
 * @hi: high
 */
int partition(int *A, int lo, int hi)
{
	int pivot = A[hi], i = lo, j;

	for (j = lo; j <= hi; j++)
	{
		if (A[j] < pivot)
		{
			_swap(i, j, A);
			i = i + 1;
		}
	}
	_swap(i, hi, A);
	return (i);
}
/**
 * quick_sortt - sorts using quick sort algorithm
 * @A: array
 * @b: position to swap
 * @a: position to swap
 */
void _swap(int a, int b, int *A)
{
	int mem, i;

	for (i = 0; A[i] != '\0'; i++)
	{
	}

	mem = A[a];
	A[a] = A[b];
	A[b] = mem;
	if (A[a] != A[b])
		print_array(A, i);
}
