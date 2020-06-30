
#include <stdio.h>
#include <math.h>

#define isint(num)    ((int) num == num)
#define isint2(num)   (floor(num) == ceil(num))

int main() 
{
	printf_s("%s\n", isint(3.00000) ? "true" : "false");
	printf_s("%s\n", isint(1.00000) ? "true" : "false");
	printf_s("%s\n", isint(5.42341) ? "true" : "false");
	printf_s("%s\n", isint(1.00001) ? "true" : "false");
	printf_s("%s", isint(9.99999) ? "true" : "false");
}
