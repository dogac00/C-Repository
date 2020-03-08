
#include <string.h>
#include <stdio.h>

char* reverse_in_place(char str[]);

int main()
{
	char tmp[] = "World";
	printf("%s", reverse_in_place(tmp));
	
	return 0;
}

char* reverse_in_place(char str[])
{
	const int length = strlen(str); // Implementation-defined

	for (int i = 0; i < length / 2; i++)
	{
		const char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}

	return str;
}