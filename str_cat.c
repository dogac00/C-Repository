#include <stdio.h>

char* str_cat(char* dest, char* src)
{
	char* temp = dest;
	
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	return temp;
}

int main()
{
	char s1[32] = "ankara";
	char s2[32] = "istanbul ";

	str_cat(s2, s1);

	puts(s2);
	
	return 0;
}
