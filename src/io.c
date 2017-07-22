#include "io.h"

int init_arr(int arr[])
{
	int len = 0, num;
	printf("Enter a positive digit (negative to quit): \n");
	while (len < ARR_LEN)
	{
		printf(">>");
		scanf("%d", &num);
		if (num < 0)
			break;
		arr[len++] = num;
	}

#ifdef COMP
	for (int i = 1; i < ARR_EXT; i++)
	{
		for (int j = 0; j < len; j++)
		{
			arr[(i * len) + j] = arr[j];
		}
	}
#endif
	putchar('\n');
	return len;
}

void print_arr(int arr[], int len)
{
#ifdef COMP
	for (int i = 0; i < ARR_EXT * len; i += ARR_EXT)
	{
		printf(" %d ", arr[i]);
	}
#else
	for (int i = 0; i < len; i++)
	{
		printf(" %d ", arr[i]);
	}
#endif
	puts("\n");
}
