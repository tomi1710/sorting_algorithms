/*
 * task 0-bubble_sort.c
 * Made by Facundo Diaz to Holberton School
 * Date - 01/02/2021
 */
#include "sort.h"
int estaordeanda(int *array, int size);
/**
 * bubble_sort - sort a simple array
 * @array: array received
 * @size: length of array
 */
void bubble_sort(int *array, size_t size)
{
	int aux;
	unsigned int i = 0;

	while (estaordeanda(array, size) == 0)
	{
		i = 0;
		while (i < size - 1)
		{

			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
			i++;
		}
	}
}
/**
 * estaordeanda - check if the array is order
 * @array: array received
 * @size: length of array
 * Return: 1 if array is order or 0 otherwhise
 */
int estaordeanda(int *array, int size)
{
	int i = 0;

	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
