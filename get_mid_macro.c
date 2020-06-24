
#include <stdio.h>

#define IS_BETWEEN(lim1, num, lim2)    (((lim1) < (num)) && ((num) < (lim2)) || ((num) < (lim1)) && ((lim2) < (num)))
#define MID(a, b, c)                   (IS_BETWEEN(a, b, c) ? (b) : IS_BETWEEN(a, c, b) ? (c) : (a))

int main()
{
	printf_s("%d\n", MID(0, 1, 2));
	printf_s("%d\n", MID(0, 2, 1));
	printf_s("%d\n", MID(1, 0, 2));
	printf_s("%d\n", MID(1, 2, 0));
	printf_s("%d\n", MID(2, 1, 0));
	printf_s("%d\n", MID(2, 0, 1));
}
