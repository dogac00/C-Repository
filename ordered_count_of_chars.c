
/*

Count the number of occurrences of each character and return it as a list of tuples in order of appearance. For empty output return an empty list.

Example:

ordered_count("abracadabra", *szout);

// using:
typedef struct Character_Count_Pair {
    char character;
    size_t count;
} ccp;

// returns:
{{'a', 5}, {'b', 2}, {'r', 2}, {'c', 1}, {'d', 1}}

// assigns length:
szout = 5

*/

#include <string.h>
#include <stdlib.h>

typedef struct Character_Count_Pair {
    char character;
    size_t count;
} ccp;

void remove_dup(char* dst, const char* src)
{
    char* t = dst;
    for (; *src; src++)
        if (!strchr(t, *src))
            *dst++ = *src;
    *dst = '\0';
}

ccp* ordered_count(const char* strin, size_t* szout) { // assign output length to szout
    size_t len = strlen(strin);
    char unique[len];
    unique[0] = '\0';
    remove_dup(unique, strin);
    *szout = strlen(unique);
    ccp* pairs = (ccp*) malloc(sizeof(ccp) * *szout);

    for (size_t i = 0; i < *szout; i++) {

        pairs[i].character = unique[i];
        pairs[i].count = 0;
    }

	for ( ; *strin; strin++)
        for (size_t i = 0; i < *szout; i++)
	        if (pairs[i].character == *strin)
                pairs[i].count++;

    return pairs;
}
