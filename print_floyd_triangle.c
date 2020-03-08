#include <stdio.h>

void print_floyd_triangle(int);

int main()
{
	print_floyd_triangle(15);
}

void print_floyd_triangle(int n)
{
	int number = 1;
	int count = 1;
	
	while (n)
	{
		for (int i = 0; i < count; ++i)
		{
			if (i != 0)
				printf("\t");

			printf("%d", number++);
			n--;
		}

		printf("\n");

		count++;
	}
}
