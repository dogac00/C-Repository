
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void losing_address_of_string();
void losing_address_of_int();

int main()
{
	losing_address_of_string();
	losing_address_of_int();
	
	return 0;
}

void losing_address_of_string()
{
	char* name = (char*) malloc(sizeof(strlen("Susan") + 1));
	strcpy(name, "Susan");
	while (*name != 0)
		printf("%c", *name++);

	// starting address of name string is lost
}

void losing_address_of_int()
{
	int* pi = (int*)malloc(sizeof(int));

	*pi = 5;

	pi = (int*)malloc(sizeof(int)); // previous address is lost
}
