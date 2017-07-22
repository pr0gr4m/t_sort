#include "common.h"
#include "merge_sort.h"
#include "insert_sort.h"
#include "shell_sort.h"
#include "no_sort.h"
#include "io.h"
#include "comp.h"

int main(void)
{
#ifndef	NOSORT

	int len;
#ifdef COMP
	int arr1[ARR_LEN * ARR_EXT] = { 0, };
	int arr2[ARR_LEN * ARR_EXT] = { 0, };
	int arr3[ARR_LEN * ARR_EXT] = { 0, };

	len = init_arr(arr1);
#else
	int arr[ARR_LEN] = { 0, };

	len = init_arr(arr);
#endif	/* COMP */

#endif	/* NOSORT */

#ifdef	MERGE
	puts("----- MERGE -----\n");
	merge_sort_ex(arr, 0, len - 1, ascending);
	puts(" ascending power >>");
	print_arr(arr, len);

	merge_sort_ex(arr, 0, len - 1, descending);
	puts(" descending power >>");
	print_arr(arr, len);
#endif
#ifdef	INSERT
	puts("----- INSERT -----\n");

	insert_sort(arr, len, ascending);
	puts(" ascending power >>");
	print_arr(arr, len);

	insert_sort(arr, len, descending);
	puts(" descending power >>");
	print_arr(arr, len);
#endif
#ifdef	SHELL
	puts("----- SHELL -----\n");
	insert_sort(arr, len, ascending);
	puts(" ascending power >>");
	print_arr(arr, len);

	insert_sort(arr, len, descending);
	puts(" descending power >>");
	print_arr(arr, len);
#endif
#ifdef COMP
	memcpy(arr2, arr1, len * ARR_EXT * sizeof(int));
	memcpy(arr3, arr1, len * ARR_EXT * sizeof(int));

	puts("----- INSERT -----\n");

	insert_sort(arr1, len * ARR_EXT, ascending);
	puts(" ascending power >>");
	print_arr(arr1, len);

	insert_sort(arr1, len * ARR_EXT, descending);
	puts(" descending power >>");
	print_arr(arr1, len);

	puts("----- SHELL -----\n");
	insert_sort(arr2, len * ARR_EXT, ascending);
	puts(" ascending power >>");
	print_arr(arr2, len);

	insert_sort(arr2, len * ARR_EXT, descending);
	puts(" descending power >>");
	print_arr(arr2, len);

	puts("----- MERGE -----\n");

	merge_sort_ex(arr3, 0, len * ARR_EXT - 1, ascending);
	puts(" ascending power >>");
	print_arr(arr3, len);

	merge_sort_ex(arr3, 0, len * ARR_EXT - 1, descending);
	puts(" descending power >>");
	print_arr(arr3, len);
#endif
#ifdef	NOSORT

	use_list();

#endif

	putchar('\n');
	return 0;
}
