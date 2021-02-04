#include "sort.h"

/**
 * shell_sort - sorts an array using the shell sort method
 * @array:array to sort
 * @siz: size of array
 */
void shell_sort(int *array, size_t siz)
{
	int interval = 1, i, aux, a, size = siz, count = 0;

	while (interval < size)
		interval = (interval * 3) + 1;
	interval = (interval - 1) / 3;

	while (interval >= 1)
	{
		i = interval;
		a = 0;

		while (a == 0)
		{
			if (array[i] < array[i - interval])
			{
				aux = array[i];
				array[i] = array[i - interval];
				array[i - interval] = aux;
			}
			else
				count = count + 1;
			i = i + 1;
			if (count == size)
				a = 1;
			if (i == size)
			{
				i = 0;
				count = 0;
			}
		}
		print_array(array, size);
		interval = (interval - 1) / 3;
	}
}
