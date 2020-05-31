#include <stdio.h>

char* mem_cpy(void* dest, const void* src, size_t n)
{
	char* d = (char*) dest;
	const char* s = (const char*) src;

	while (n--)
		*d++ = *s++;

	return d;
}
