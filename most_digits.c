/*

Find the number with the most digits.

If two numbers in the argument array have the same number of digits, return the first one in the array.

*/

#include <stddef.h>

int digit_count(int n)
{
	int cnt = 0;

	while (n)
	{
		cnt++;
		n /= 10;
	}

	return cnt;
}

int find_longest(int* numbers, size_t numbers_size)
{
	int max = 0;
	int num;

	for (size_t i = 0; i < numbers_size; i++)
	{
		int digits = digit_count(numbers[i]);
		if (digits > max)
		{
			max = digits;
			num = numbers[i];
		}
	}
	
    return num;
}
