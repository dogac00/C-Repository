#include <stdio.h>

void shift_clockwise(int * arr, size_t size)
{
	int first_elem = *arr;

	for (size_t i = 0; i < size - 1; i++)
		arr[i] = arr[i + 1];

	arr[size - 1] = first_elem;
}

void rotate_clockwise(int * arr, size_t size, int n)
{
	for (int i = 0; i < n; i++)
		shift_clockwise(arr, size);
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	size_t sz = sizeof arr / sizeof * arr;

	rotate_clockwise(arr, sz, 2);

	for (size_t i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}
