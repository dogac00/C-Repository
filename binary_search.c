
#include <stdio.h>
int binsearch(int x, int arr[], int n);

int main() 
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,14,34,546,4566,24545 };
	int x = 6;

	int pos = binsearch(x, arr, sizeof arr / sizeof * arr);

	printf("Pos : %d", pos);
}

int binsearch(const int x, const int arr[], const int n)
{
	int low = 0;
	int high = n - 1;
	int middle;
	
	while (low <= high)
	{
		middle = (low + high) / 2;

		int elem = arr[middle];

		if (elem > x)
			high = middle - 1;
		else if (elem < x)
			low = middle + 1;
		else
			return middle;
	}

	return -1;
}
