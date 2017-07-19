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
	putchar('\n');
	return len;
}

void print_arr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf(" %d ", arr[i]);
	}
	putchar('\n');
}
