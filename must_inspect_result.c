
#include <stdio.h>

_Must_inspect_result_
int foo()
{
	// Check my return!

	return 1;
}

int main()
{
	foo(); // Here, the compiler will generate a warning because of the annotation
}
