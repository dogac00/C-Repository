
#include <stdio.h>

int is_integer(double number)
{
	return (int) number == number;
}

int main() 
{
	printf_s("%s\n", is_integer(3.00000) ? "true" : "false");
	printf_s("%s\n", is_integer(1.00000) ? "true" : "false");
	printf_s("%s\n", is_integer(5.42341) ? "true" : "false");
	printf_s("%s\n", is_integer(1.00001) ? "true" : "false");
	printf_s("%s", is_integer(9.99999) ? "true" : "false");
}
