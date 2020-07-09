
#include <stdio.h>
#include <ctype.h>

char* to_lower(char* dst, const char* src)
{
  char* tmp = dst;
  
  while (*src)
    *tmp++ = tolower(*src++);
  *tmp = 0;
  return dst;
}

int main()
{
	const char* str = "Hello World!";
	char buf[32];
	to_lower(str, buf);
	puts(buf);
	return 0;
}
