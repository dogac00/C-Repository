#include <stdio.h>

int str_len(char* str)
{
	int count = 0;
	
	while (*str++ != '\0')
		count++;

	return count;
}

int main()
{
	char* str = "dogac";

	printf("%d", str_len(str));
	
	return 0;
}
