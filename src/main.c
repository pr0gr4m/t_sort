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
	int arr[ARR_LEN] = { 0, };
	int len;

	len = init_arr(arr);
#endif

#ifdef	MERGE
	puts("----- MERGE -----");
	merge_sort(arr, 0, len - 1, ascending);
	puts("ascending power >>");
	print_arr(arr, len);

	merge_sort(arr, 0, len - 1, descending);
	puts("descending power >>");
	print_arr(arr, len);
#endif
#ifdef	INSERT
	puts("----- INSERT -----");
	insert_sort(arr, len, ascending);
	puts("ascending power >>");
	print_arr(arr, len);

	insert_sort(arr, len, descending);
	puts("descending power >>");
	print_arr(arr, len);
#endif
#ifdef	SHELL
	puts("----- SHELL -----");
	insert_sort(arr, len, ascending);
	puts("ascending power >>");
	print_arr(arr, len);

	insert_sort(arr, len, descending);
	puts("descending power >>");
	print_arr(arr, len);
#endif
#ifdef	NOSORT

	use_list();

#endif

	putchar('\n');
	return 0;
}
