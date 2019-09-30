#include <stdio.h>

int main()
{
	char s[10] = "ankara";
	void* ank = s;

	while (*(char*)ank != '\0')
		printf("%c", *((char*)ank)++);

	
	return 0;
}
