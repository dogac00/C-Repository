
#include <stdio.h>

int main()
{
	int ival = 23425;
	double dval1 = 3.12324;
	double dval2 = 56.7467;

	printf("%X", ival); // hex
	printf("%.1f", dval1); // 1 digit after point
	printf("%.3f", dval2); // 3 digits after point
}
