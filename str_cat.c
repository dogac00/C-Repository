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

char* strcat_second(char* dest, const char* src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; (dest[i + j] = src[j]) != '\0'; ++j)
		;

	return dest;
}

char* strcat_third(char* dest, const char* src)
{
	char* temp = dest;

	while (*++dest != '\0')
		;

	while ((*dest++ = *src++) != '\0')
		;

	return temp;
}

int main()
{
	char s1[32] = "ist";
	char s2[32] = "new york ";

	mystrcat(s2, s1);

	puts(s2);

	return 0;
}
