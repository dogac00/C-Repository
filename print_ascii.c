
#include <stdio.h>

int main()
{
	for (int i = 32; i < 127; ++i)
		printf("%d      %c    \n", i, i);
}

// this does not print control characters
// which are the first 32 characters and the last char in ASCII
// you can check whether a character is a control character or not
// by calling the standard function incntrl
