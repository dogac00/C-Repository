
// Inspired by my teacher Necati Ergin
// But I tried this at home for exercise purposes
// All code is written by me

#include <stdio.h>

void generic_swap(void* p1, void* p2, size_t elemSize)
{
	char* ch1 = p1;
	char* ch2 = p2;
	
	while (elemSize--)
	{
		const char tmp = *ch1;
		*ch1++ = *ch2;
		*ch2++ = tmp;
	}
}

int main()
{
	int a = 5, b = 15;
	printf("a = %d, b = %d\n", a, b);
	generic_swap(&a, &b, sizeof(int));
	printf("a = %d, b = %d\n", a, b);

	double c = 25.54436, d = 35.7879765;
	printf("c = %f, d = %f\n", c, d);
	generic_swap(&c, &d, sizeof(double));
	printf("c = %f, d = %f\n", c, d);
}
