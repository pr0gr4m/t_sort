#include "common.h"
#include "merge_sort.h"
#include "io.h"

int main(void)
{
	int arr[ARR_LEN] = { 0, };
	int len;

	len = init_arr(arr);
	merge_sort(arr, 0, len - 1);

	print_arr(arr, len);

	return 0;
}
