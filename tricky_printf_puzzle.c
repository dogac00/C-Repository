
#include <stdio.h>

int main()
{
	int x = 8765345;

	printf("%d", printf("%d", printf("%d", x)));
}

// because printf function does have a side effect
// it will first write thath number to the console
// then how many characters it printed
// then once again how many characters it printed

// so first               >>>>   8765345
// then len("8765345")    >>>>   7
// then len("7")          >>>>   1

// so the answer is       >>>>   876534571
