
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int is_anagram(const char* str1, const char* str2)
{
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);

	if (len1 != len2)
		return 0;

	int tbl1[UCHAR_MAX] = { 0 };
	int tbl2[UCHAR_MAX] = { 0 };

	for (const char* cp = str1; *cp; cp++)
		tbl1[*cp]++;
	for (const char* cp = str2; *cp; cp++)
		tbl2[*cp]++;

	for (int i = 0; i < UCHAR_MAX; i++)
		if (tbl1[i] != tbl2[i])
			return 0;

	return 1;
}

int main()
{
	int r = is_anagram("aaagmnrs", "anagrams");
	
	printf("%d", r);
}
