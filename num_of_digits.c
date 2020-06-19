
#include <stdio.h>
#include <math.h>

int num_of_digits(int number)
{
	return (int) floor(log10(number) + 1);
}

int main()
{
	printf_s("%d => %d\n", 99999, num_of_digits(99999));
	printf_s("%d => %d\n", 5, num_of_digits(5));
	printf_s("%d => %d\n", 66, num_of_digits(66));
	printf_s("%d => %d\n", 7777, num_of_digits(7777));
	printf_s("%d => %d\n", 1000000, num_of_digits(1000000));
}
