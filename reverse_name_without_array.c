
// this program reverses a name without using any extra memory for a new array
// ex: if the input is "john doe", the output will be "doe john"


#include <stdio.h>

void sgets(char str[])
{
	int c;
	int idx = 0;

	while ((c = getchar()) != '\n')
		str[idx++] = (char) c;

	str[idx] = '\0';
}

size_t str_len(const char* str)
{
	size_t idx = 0;
	
	while (str[idx])
		idx++;

	return idx;
}

void reverse_in_place(char* str, const size_t len)
{
	for (size_t i = 0; i < len / 2; i++)
	{
		const char tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}
}

int str_find(const char* str, const char ch)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == ch)
			return i;

	return -1;
}

int main()
{
	char str[100];

	printf("Enter name:\n");
	sgets(str);

	const size_t len = str_len(str);

	reverse_in_place(str, len);

	int space = str_find(str, ' ');

	if (space == -1)
	{
		printf("There is no space in string.");
		return 1;
	}

	reverse_in_place(str, space);
	reverse_in_place(str + space + 1, len - space - 1);
	
	puts(str);

	return 0;
}
