#include <stdio.h>

char* str_cat_second(char* dest, char* src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; (dest[i + j] = src[j]) != '\0'; ++j)
		;

	return dest;
}

int main()
{
	char s1[32] = "ankara";
	char s2[32] = "istanbul ";

	str_cat_second(s2, s1);

	puts(s2);
	
	return 0;
}
