
int mymemcmp(const void* str1, const void* str2, size_t count)
{
	const unsigned char* s1 = str1;
	const unsigned char* s2 = str2;
	
	while (count--)
	{
		if (*s1 != *s2)
			return *s1 - *s2;
		s1++;
		s2++;
	}

	return 0;
}

int main()
{
	const char* name1 = "Dogac";
	const char* name2 = "Nuri";
	size_t min_len = strlen(name2);

	printf("%s", mymemcmp(name1, name2, min_len) ? "false" : "true");
	
	return 0;
}
