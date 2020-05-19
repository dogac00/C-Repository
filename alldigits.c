
#include <stdio.h>
#include <ctype.h>

// This function checks if the given input string
// contains all digits 0-9

#define MAX 256

int alldigits(const char str[])
{
	int present[MAX] = { 0 };

	for (int i = 0; str[i] != '\0'; ++i)
		if (isdigit(str[i]))
			present[str[i]] = 1;

	for (int i = '0'; i <= '9'; i++)
		if (!present[i])
			return 0;

	return 1;
}

int main()
{
	const char name[] = "0123456rtyudfdfgn789ji";

	printf("%d ", alldigits(name));
	
	return 0;
}
