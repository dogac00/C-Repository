#include <stdio.h>

int to_dec(int bin) 
{
	int result = 0;
	int exp = 1;
	
	while (bin)
	{
		result += (bin % 10) * exp;
		bin /= 10;
		exp *= 2;
	}

	return result;
}

int main()
{
	int result = to_dec(101010101);

	printf("%d", result);
}
