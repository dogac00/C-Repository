
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void arr_print(const char** arr, size_t size)
{
	for (size_t i = 0; i < size; ++i)
		printf("%s ", arr[i]);
}

int main()
{
	const char* names[] =
	{
		"ahmet",
		"mustafa",
		"mehmet"
	};

	size_t cnt = _countof(names);
	
	qsort(names, cnt, sizeof(char*), strcmp);

	arr_print(names, cnt);
	
	return 0;
}
