#include "sort.h"
/**
 * selection_sort - sorts array with selection srt
 * @array: the array to be soted
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, t;
	int temp;

	if (array != NULL && size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			t = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[t])
					t = j;
			}
			if (array[i] != array[t])
			{
				temp = array[i];
				array[i] = array[t];
				array[t] = temp;
				print_array(array, size);
			}
		}
	}
}
