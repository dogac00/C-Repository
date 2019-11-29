
#define ARRAY_SIZE 256
#include <stdio.h>
#include <string.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print_array(int arr[], int size)
{
	int i = 0;

	for ( ; i < size; i++)
	{
		printf("%d", *(arr + i));
	}
}

int find_index(int arr [], int size, int number)
{
	int i = 0;
	int result = -1;
	
	for (i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			result = i;
			break;
		}
	}

	return result;
}

int main()
{
	int n;

	printf("N degerini giriniz:");
	scanf("%d", &n);

	printf("Array degerlerini giriniz:");

	int arr[ARRAY_SIZE];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int find, jump;

	printf("Enter number to find:");
	scanf("%d", &find);
	printf("Enter jump number:");
	scanf("%d", &jump);

	int index = find_index(arr, n, find);

	while (jump-- > 0)
	{
		int index_to_jump = (index + 1) % n;

		swap(&arr[index++], &arr[index_to_jump]);
	}

	print_array(arr, n);
}
