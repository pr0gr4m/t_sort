#include "insert_sort.h"

void insert_sort(int arr[], int len, int (*comp)(int a, int b))
{
	int i, j, tmp;
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
}
