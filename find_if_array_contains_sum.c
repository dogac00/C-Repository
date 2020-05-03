
// Question is to find two elements in an array that
// their sum is equal to another given element
// for example if the array is [7, 3, 49, -8, 6, -11, 10]
// and if the number is 16
// then, there exists a sum that is equal to 16

// All code is written by me

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int contains_sum(int arr[], size_t size, int elem)
{
	qsort(arr, size, sizeof(int), cmpfunc);

	// We will pick two anchors here
	// One from left, and one from right

	int left = 0, right = (int) size - 1;

	while (left < right)
	{
		int sum = arr[left] + arr[right];

		if (sum < elem)
			left++;
		else if (sum > elem)
			right--;
		else
			return 1;
	}
	
	return 0;
}

int main()
{
	int arr[] = {7, 3, 49, -8, 6, -11, 10};
	int elem = 16;
	size_t size = sizeof(arr) / sizeof(*arr);

	int result = contains_sum(arr, size, elem);

	printf("%s", result ? "Contains 16" : "Does not contain 16");
}
