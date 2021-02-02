#include "sort.h"

/*
 * task 3-quick_sort.c
 * Made by Facundo Diaz to Holberton School
 * Date - 01/02/2021
 */
#include "sort.h"
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

/**
int partition(int *A, int lo, int hi);
void _swap(int a, int b, int *A);
void quick_sortt(int *A, int lo, int hi);
/**
 * quick_sort - calls quick_sortt
 * @array: array
 * @size: size of array
 *
void quick_sort(int *array, size_t size)
{
	quick_sortt(array, 0, size - 1);
}
/**
 * quick_sortt - sorts using quick sort algorithm
 * @A: array
 * @lo: low
 * @hi: high
 *
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
 * Return: a
 *
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
 * _swap - sorts using quick sort algorithm
 * @A: array
 * @b: position to swap
 * @a: position to swap
 *
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
*/
