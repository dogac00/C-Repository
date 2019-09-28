#include <stdio.h>

char* str_n_cpy(char* dest, char* src, unsigned n)
{
	char* temp = dest;

	while (n-- > 0) {
		*dest = *src;
		if (*src != '\0')
			++src;
		++dest;
	}

	return temp;

}

int main()
{
	char first[] = "first";
	char second[] = "second";

	str_n_cpy(second, first, 3);

	puts(second);

	return 0;
}
