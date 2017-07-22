#include "shell_sort.h"

void shell_sort(int arr[], int len, int (*comp)(int a, int b))
{
	struct timespec start, end;
	int i, j, k, gap, tmp;
	clock_gettime(CLOCK_REALTIME, &start);

	for (gap = len; gap > 1; gap = gap / 3 + 1)
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

	clock_gettime(CLOCK_REALTIME, &end);

	printf("\tTime to shell sort %lds.%ldns\n",
			(long)(end.tv_sec - start.tv_sec),
			end.tv_nsec - start.tv_nsec);
}
