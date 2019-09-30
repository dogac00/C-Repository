#include <stdio.h>

void* mem_set(void* dest, const int val, unsigned n)
{
	unsigned char* ch_dest = dest;

	while (n-- > 0)
		*ch_dest++ = val;

	return ch_dest;
}

int main()
{
	int dgc[12];

	mem_set(dgc, 'a', 6);

	printf("%c", *dgc);
	
	return 0;
}
