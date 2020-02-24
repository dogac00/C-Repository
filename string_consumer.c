#include <stdio.h>

typedef void (*string_consumer)(char*);

void process_str(char* str, string_consumer consumer);
void print_str(char* str);

int main()
{
	process_str("MY STR", print_str);
	
	return 0;
}

void process_str(char* str, const string_consumer consumer)
{
	consumer(str);
}

void print_str(char* str)
{
	puts(str);
}
