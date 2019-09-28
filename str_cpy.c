#include <stdio.h>

void str_cpy(char* dest, const char* src)
{
	for (;(*dest++ = *src++) != '\0';)
		;
}

int main()
{
	char s1[32] = "ankara";
	char s2[32];

	str_cpy(s2, s1);

	puts(s2);
	
	return 0;
}
