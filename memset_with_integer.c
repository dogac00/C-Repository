
// Question?
// What will it print?

#include <string.h>
#include <stdio.h>

#define iprint(i)     printf(#i " = %d\n", i)

int main()
{
	int i;

	memset(&i, 255, sizeof(int));
	
	iprint(i);

	memset(&i, 1, sizeof(int));
	
	iprint(i);
	
	return 0;
}
