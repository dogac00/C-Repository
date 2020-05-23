

// Input:
// Input contains the array elements ex: [2,-3,10,-5]
//
// Output
// Returns the maximum product of some non-empty
// subset of the numbers in array
//
// Our Task
// Write a function solution(pow) that takes a list of integers
// representing the power output levels of each panel in an array
// and returns the maximum product of some non-empty subset
// of those numbers.
//
// Sample Input: 2, 0, 2, 2, 0
// Sample Output: 8
//
// Sample Input: 2, -3, 1, 0, -5
// Sample Output: 30
//
// Sample Input: -2, -3, 4, -5
// Sample Output: 60

// My solution here is multiply all numbers
// except the zero ones
// and if the result is negative
// divide the result by the maximum negative number
// in the special case of one element array
// we just return its lone element

#include <stdlib.h>
#include <stdio.h>

int solution(const int* pow, size_t size)
{
	if (size == 1)
		return *pow;

	int product = 1;
	int maxNeg = INT_MIN;

	for (size_t i = 0; i < size; ++i)
	{
		if (pow[i] != 0)
			product *= pow[i];
		if (pow[i] < 0 && pow[i] > maxNeg)
			maxNeg = pow[i];
	}

	if (maxNeg == INT_MIN)
		return product;
	if (product < 0)
		return product / maxNeg;

	return product;
}

int main()
{
	const int input1[] = { 2, 0, 2, 2, 0 };
	const size_t size1 = _countof(input1);
	const int input2[] = { 2, -3, 1, 0, -5 };
	const size_t size2 = _countof(input2);
	const int input3[] = { -2, -3, 4, -5 };
	const size_t size3 = _countof(input3);

	printf("Solution 1 : %d", solution(input1, size1));
	printf("Solution 2 : %d", solution(input2, size2));
	printf("Solution 3 : %d", solution(input3, size3));

	return 0;
}
