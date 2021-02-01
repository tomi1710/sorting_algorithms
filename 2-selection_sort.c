#include "sort.h"
#include <string.h>
/**
 * selection_sort - sorts
 * @array: array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, a = 0, swap = 0, count = 0, menor = 0;
	int min = 0;

	while (i < size)
	{
		count = 0;
		a = i;
		min = array[i];
		for (; a < size; a++)
		{
			if (min > array[a])
                        {
				min = array[a];
				menor = a;
				count = 1;
			}
		}
		if (count == 1)
		{
			swap = array[i];
			array[i] = array[menor];
			array[menor] = swap;
			print_array(array, size);
		}
		i++;
	}
}
