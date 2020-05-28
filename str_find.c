
#include <stdio.h>
#include <string.h>

// I just wrote two different versions of this pattern finding function
// Both uses the same functionality under the hood
// First one uses the library function strncmp to compare substrings
// In the second one, I did the comparison by hand

char* str_find_1(const char* str, const char* pattern)
{
	const size_t len = strlen(pattern);
	for (size_t i = 0; str[i] != 0; i++)
		if (!strncmp(str + i, pattern, len))
			return (char*) str + i;
	
	return NULL;
}

char* str_find_2(const char* str, const char* pattern)
{
	const size_t len1 = strlen(str);
	const size_t len2 = strlen(pattern);

	for (size_t i = 0; i < len1 - len2 + 1; i++)
	{
		int found = 1;

		for (size_t j = 0; j < len2; j++)
		{
			if (str[i + j] != pattern[j])
				found = 0;
		}

		if (found)
			return (char*) str + i;
	}

	return NULL;
}

int main()
{
	char* ch = str_find_1("John Doe", "Doe");

	printf("%s", ch);
	
	return 0;
}
