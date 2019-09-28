#include <stdio.h>

char* str_chr(char* str, char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return str;

		str++;
	}

	return NULL;
}

int main()
{
	char* seq = "dogac";
	char ch = 'd';

	printf("%s", str_chr(seq, ch));
	
	return 0;
}
