#include <stdio.h>

char* mystrcat(char* dest, const char* src)
{
	char* s = dest;

	while (*dest)
		dest++;
	while (*dest++ = *src++)
		;

	return s;
}

int main()
{
	char s1[32] = "ist";
	char s2[32] = "new york ";

	mystrcat(s2, s1);

	puts(s2);

	return 0;
}
