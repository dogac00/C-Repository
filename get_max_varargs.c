#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>

int get_max(int howMany, ...);

int main()
{
	int max = get_max(3, 35, 25, 15);

	printf("%d", max);
}

int get_max(int howMany, ...)
{
	int max = INT_MIN;

	va_list args;
	
	va_start(args, howMany);
	for (int i = 0; i < howMany; ++i)
	{
		int arg = va_arg(args, int);
		
		if (arg > max)
			max = arg;
	}

	va_end(args);
	
	return max;
}
