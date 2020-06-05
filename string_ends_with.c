#include <stdbool.h>
#include <string.h>

bool solution(const char* string, const char* ending)
{
    size_t lenstr = strlen(string);
    size_t lenend = strlen(ending);
	
    if (lenend > lenstr)
        return false;
	
    return !strcmp(string + lenstr - lenend, ending);
}
