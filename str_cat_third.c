#include <stdio.h>

char* str_cat_third(char* dest, char* src)
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
	char s1[32] = "ankara";
	char s2[32] = "istanbul ";

	str_cat_third(s2, s1);

	puts(s2);
	
	return 0;
}
