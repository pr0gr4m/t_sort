#include "insert_sort.h"

void insert_sort(int arr[], int len, int (*comp)(int a, int b))
{
	struct timespec start, end;
	int i, j, tmp;
	clock_gettime(CLOCK_REALTIME, &start);
	for (i = 1; i < len; i++)
	{
		tmp = arr[i];
		j = i;
		while (comp(arr[j - 1], tmp) > 0 && j > 0)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = tmp;
	}
	clock_gettime(CLOCK_REALTIME, &end);

	printf("\tTime to insert sort : %lds.%ldns\n",
			(long)(end.tv_sec - start.tv_sec),
			end.tv_nsec - start.tv_nsec);
}
