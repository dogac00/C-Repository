
// Sort even numbers in ascending order
// Sort odd numbers in descending order
// Odd numbers must come first
// (Numbers are natural numbers)

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* num1, const void* num2)
{
	return *(int*)num1 - *(int*)num2;
}

void sort(int arr[], size_t size)
{
	for (size_t i = 0; i < size; ++i)
		if (arr[i] % 2)
			arr[i] = -arr[i];

	qsort(arr, size, sizeof(int), cmp);

	for (size_t i = 0; i < size; ++i)
		if (arr[i] % 2)
			arr[i] = abs(arr[i]);
}

int main()
{
	int arr[] = {2,1,11,6,17,8,9,0,5,55,64,10,7};
	size_t size = sizeof(arr) / sizeof(*arr);
	
	sort(arr, size);

	for (size_t i = 0; i < size; i++)
		printf("%d ", arr[i]);
}
