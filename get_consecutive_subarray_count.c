
// Problem is to get consecutive subarray count
// Example input: 33, 1, 34, 2, 5, 6, 7
// Since there are [1, 2], [5, 6, 7] and [33, 34]
// There are 3 consecutive subarrays here

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* num1, const void* num2)
{
	return *(int*)num1 - *(int*)num2;
}

int consecutive_subarray_count(int arr[], size_t size)
{
	qsort(arr, size, sizeof(int), cmp);

	for (size_t i = 0; i < size; ++i)
		printf("%d ", arr[i]);

	printf("\n");

	int count = 1;

	for (size_t i = 0; i < size - 1; ++i)
		if (arr[i] + 1 != arr[i + 1])
			count++;

	return count;
}

int main()
{
	int arr[] = {2,1,11,6,17,8,9,0,5,55,64,10,7};
	size_t size = sizeof(arr) / sizeof(*arr);
	
	int cnt = consecutive_subarray_count(arr, size);

	printf("%d", cnt);
}
