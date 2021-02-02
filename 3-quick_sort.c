#include "sort.h"
void original_quick_sort(int *A, int lo, int hi, size_t size);
int partition(int *A, int lo, int hi, size_t size);
/**
 * quick_sort - sort function using quick sort algoritmh
 * @array: array received
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	original_quick_sort(array, 0, size - 1, size);
}

/**
 * original_quick_sort - original function of quick sort
 * @A: array received
 * @lo: menor indice
 * @hi: mayor indice
 * @size: size of array
 */
void original_quick_sort(int *A, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(A, lo, hi, size);
		original_quick_sort(A, lo, p - 1, size);
		original_quick_sort(A, p + 1, hi, size);
	}
}

/**
 * partition - partition function
 * @A: array received
 * @lo: menor indice
 * @hi: mayor indice
 * @size: size of array
 * Return: i
 */
int partition(int *A, int lo, int hi, size_t size)
{
	int pivot, aux, j, i;

	pivot = A[hi];
	i = lo;
	j = lo;
	for (; j <= hi; j++)
	{
		if (A[j] < pivot)
		{
			aux = A[j];
			A[j] = A[i];
			A[i] = aux;
			if (i != j)
				print_array(A, size);
			i++;
		}
	}
	aux = A[i];
	A[i] = A[hi];
	A[hi] = aux;
	if (A[hi] != pivot)
		print_array(A, size);
	return (i);
}
