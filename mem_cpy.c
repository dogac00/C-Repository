#include <stdio.h>

char* mem_cpy(void* dest, const void* src, unsigned n)
{
	char* p_dest = dest;
	const char* p_src = src;

	while (n--)
	{
		*p_dest++ = *p_src++;
	}

	return p_dest;
}
