#include "merge_sort.h"

static void merge(int arr[], int left, int mid, int right)
{
	int fidx = left;
	int ridx = mid + 1;
	int i;

	int *sort_arr = (int *)malloc(sizeof(int) * (right + 1));
	int sidx = left;

	while (fidx <= mid && ridx <= right)
	{
		if (arr[fidx] <= arr[ridx])
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

void merge_sort(int arr[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;

		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}
