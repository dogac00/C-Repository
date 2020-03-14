
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

int main()
{
	const char func[] = __FUNCTION__;

	assert(strcmp(func, "main") == 0);
	
	puts(func);
	
	return 0;
}

// of course we know the function name is main
// but the aim is to show the assert macro
