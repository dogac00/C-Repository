
#include <stdio.h>

void str_cpy_1(char*, const char*);
void str_cpy_2(char*, const char*);
void str_cpy_3(char*, const char*);

int main()
{
	char* src = "Hello World";
	char dest[24];

	str_cpy_1(dest, src);

	puts(dest);
}

void str_cpy_1(char* dest, const char* src)
{
	for (; (*dest++ = *src++) != '\0';)
		;
}

void str_cpy_2(char* dest, const char* src)
{
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
}

void str_cpy_3(char* dest, const char* src)
{
	for (int i = 0; (dest[i] = src[i]) != '\0'; i++)
		;

}
