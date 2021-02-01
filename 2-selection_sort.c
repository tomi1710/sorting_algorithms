#include "sort.h"
#include <string.h>
/**
 * selection_sort - sorts
 * @array: array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, a = 0, swap = 0, count = 0;

	while (i < size)
	{
		count = 0;
		a = i;
		for (; a < size; a++)
		{
			if (array[i] > array[a])
                        {
				swap = array[i];
				array[i] = array[a];
				array[a] = swap;
				count = 1;
			}
		}
		if (count == 1)
			print_array(array, size);
		i++;
	}
}
