#include "shell_sort.h"

void shell_sort(int arr[], int len, int (*comp)(int a, int b))
{
	int i, j, k, gap, tmp;
	for (gap = len / 2; gap > 0; gap /= 2)
	{
		for (i = 0; i < gap; i++)
		{
			for (j = i + gap; j < len; j += gap)
			{
				tmp = arr[j];
				k = j;

				while (k >= gap && comp(arr[k - gap], tmp) > 0)
				{
					arr[k] = arr[k - gap];
					k -= gap;
				}
				arr[k] = tmp;
			}
		}
	}
}
