
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#define EXIT_IF(cond)      { if (cond) exit(EXIT_FAILURE); }

/*
 * This code searches an element in an array
 * with two instructions executed in loop
 * Normally when we search for an element linearly,
 * we execute three instructions which are:
 * 1- compare the index with the size
 * 2- check if current element equals the element we are searching
 * 3- and increment the loop variable
 *
 * But in this implementation which is thought by Donald Knuth
 * we execute two instructions in a loop:
 * 1- compare current element with the element we are searching
 * 2- increment loop variable
 * when we are at end the condition becomes true and loop index
 * becomes the size
 *
 * We need to allocate one more element at the end to
 * implement this algorithm
 */

int main()
{
	int cnt;
	printf("Enter array count:");
	scanf_s("%d", &cnt);
	printf("Enter array elements:");
	int* arr = malloc((cnt + 1) * sizeof(int));

	EXIT_IF(!arr);

	for (int i = 0; i < cnt; i++)
		scanf_s("%d", arr + i);

	printf("Enter the value for look up:");
	int elem;
	scanf_s("%d", &elem);

	*(arr + cnt) = elem;
	// Wrote this way due to a false positive
	// because of the Visual Studio's static code analyzer

	int i = 0;

	for (; *(arr + i) != elem; i++)
		;

	printf_s("%s", (i == cnt) ? "Array does not contain element." : "Array contains element.");

	free(arr);
}
