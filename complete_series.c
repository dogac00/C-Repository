#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

int find_max(const int* arr, size_t size)
{
	int max = INT_MIN;
	for (size_t i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

int is_repeating(const int* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
		for (size_t j = 0; j < size; j++)
			if (i != j && arr[i] == arr[j])
				return 1;

	return 0;
}

int* completeSeries(const int* arr, size_t inputSize, size_t* outputSize)
{
	if (is_repeating(arr, inputSize))
	{
		int* a = calloc(1, sizeof(int));
		if (!a) return NULL;
		*outputSize = 1;
		*a = 0;
		return a;
	}

	int max = find_max(arr, inputSize);
	*outputSize = max + 1;
	int* result = calloc(max + 1, sizeof(int));
	if (!result) return NULL;
	for (size_t i = 0; i < max + 1; i++)
		result[i] = i;
	return result;
}
