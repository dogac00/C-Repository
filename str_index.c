
#include <stdio.h>

#define bool int
#define true 1
#define false 0

int str_index(const char str[], const char to_search[]);

int main()
{
	printf("%d", str_index("word", "ord"));
	printf("%d", str_index("word", "or"));
	
	return 0;
}

int str_index(const char str[], const char to_search[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		bool is_match = true;

		for (int j = 0; to_search[j] != '\0'; j++)
			if (str[i + j] != to_search[j])
			{
				is_match = false;
				break;
			}

		if (is_match)
			return i;
	}
	
	return -1;
}
