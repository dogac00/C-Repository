#include <string.h>
#include <stdio.h>

void remove_dup(char* dst, const char* src)
{
	char* t = dst;
	for (; *src; src++)
		if (!strchr(t, *src))
			*dst++ = *src;
	*dst = '\0';
}

int main()
{
	const char* src = "aabbccddeeffgghh";
	char dst[100] = { 0 };

	remove_dup(dst, src);

	puts(dst);
}
