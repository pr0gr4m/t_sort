#include "merge_sort.h"

static void merge(int arr[], int left, int mid, int right, int (*comp)(int a, int b))
{
	int fidx = left;
	int ridx = mid + 1;
	int i;

	int *sort_arr = (int *)malloc(sizeof(int) * (right + 1));
	int sidx = left;

	while (fidx <= mid && ridx <= right)
	{
		if (comp(arr[fidx], arr[ridx]) <= 0)
			sort_arr[sidx] = arr[fidx++];
		else
			sort_arr[sidx] = arr[ridx++];

		sidx++;
	}

	if (fidx > mid)
	{
		for (i = ridx; i <= right; i++, sidx++)
			sort_arr[sidx] = arr[i];
	}
	else
	{
		for (i = fidx; i <= mid; i++, sidx++)
			sort_arr[sidx] = arr[i];
	}

	for (i = left; i <= right; i++)
		arr[i] = sort_arr[i];

	free(sort_arr);
}

void merge_sort(int arr[], int left, int right, int (*comp)(int a, int b))
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;

		merge_sort(arr, left, mid, comp);
		merge_sort(arr, mid + 1, right, comp);

		merge(arr, left, mid, right, comp);
	}
}

void merge_sort_ex(int arr[], int left, int right, int (*comp)(int a, int b))
{
	struct timespec start, end;
	clock_gettime(CLOCK_REALTIME, &start);
	merge_sort(arr, left, right, comp);
	clock_gettime(CLOCK_REALTIME, &end);

	printf("\tTime to merge sort : %lds.%ldns\n",
			(long)(end.tv_sec - start.tv_sec),
			end.tv_nsec - start.tv_nsec);
}
