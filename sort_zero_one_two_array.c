
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * this function sorts an array of
 * just 0s, 1s and 2s
 * I saw the question in
 * geeksforgeeks website
 *
 *
 * solution is by me
 *
 * This solution is O(N) time complexity
 * and O(1) space complexity because
 * we just allocate extra integers to
 * hold the counts of zeroes, ones and twos
 * and some loop variables
 *
 * We did this in O(N) because we knew that the array
 * just has three different types of elements
 * 
 */
void sort_zero_one_two_array(int* arr, size_t size)
{
	int zero = 0, one = 0, two = 0;

	for (size_t i = 0; i < size; i++)
	{
		switch (arr[i])
		{
		case 0: zero++; break;
		case 1: one++; break;
		case 2: two++; break;
		default: exit(EXIT_FAILURE);
		}
	}

	for (int i = 0; i < zero; ++i)
		arr[i] = 0;
	for (int i = zero; i < zero + one; ++i)
		arr[i] = 1;
	for (int i = one + zero; i < zero + one + two; ++i)
		arr[i] = 2;
}

int main()
{
	int arr[] = { 1,0,0,1,0,0,2,2,0,1,1,0,0,0,2,2,2,2,0,1,1,1 };
	size_t sz = sizeof arr / sizeof * arr;

	sort_zero_one_two_array(arr, sz);

	for (size_t i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}
