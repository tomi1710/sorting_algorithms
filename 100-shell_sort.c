#include "sort.h"

void shell_sort(int *array, size_t n)
{
	int interval, count = 0, count2 = 0, i, aux, len;

	for (len = 0; array[len]; len++)
	{
	}

	while (count == 0)
	{
		interval = (n * 3) + 1;
		count2 = 0;
		while (count2 == 0)
		{
			for (i = interval - 1; array[i] <= len; i++)
			{
				if (array[i] < array[i - interval])
				{
					aux = array[i];
					array[i] = array[i - interval];
					array[i - interval] = aux;
					print_array(array, len);
				}
			}
			count2 = 1;
		}
	}
}
