
#include <stdio.h>
#include <string.h>

// check if given string str begins with given pattern
int strbeginswith(const char* str, const char* substr)
{
	size_t len1 = strlen(str);
	size_t len2 = strlen(substr);

	if (len2 > len1)
		return 0;

	return !memcmp(str, substr, len2);
}

// check if given string str ends with given pattern
int strendswith(const char* str, const char* substr)
{
	size_t len1 = strlen(str);
	size_t len2 = strlen(substr);

	if (len2 > len1)
		return 0;

	return !memcmp(str + len1 - len2, substr, len2);
}

int main()
{
	const char* name1 = "Dogac";
	const char* name2 = "gac";

	printf("%s", strend(name1, name2) ? "true" : "false");
	
	return 0;
}
