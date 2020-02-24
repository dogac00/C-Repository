
#define ALLOC(type)     ((type*) malloc(sizeof(type)))
#define FREE(ptr)     { if (!(ptr)) { free(ptr); (ptr) = NULL; } }
#include <stdlib.h>

int main()
{
	int* s = ALLOC(int);

	FREE(s);
	
	return 0;
}
