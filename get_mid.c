#include <stdio.h>

int get_mid(const int a, const int b, const int c)
{
	if (a > b)
	{
		if (c > a)
			return a;
		
		if (b > c)
			return b;

		return c;
	}

	if (c > b)
		return b;

	if (a > c)
		return a;
	
	return c;
}

int main()
{
	const int m1 = get_mid(3, 4, 5);
	const int m2 = get_mid(3, 5, 4);
	const int m3 = get_mid(4, 5, 3);
	const int m4 = get_mid(4, 3, 5);
	const int m5 = get_mid(5, 4, 3);
	const int m6 = get_mid(5, 3, 4);

	printf("%d %d %d %d %d %d", m1, m2, m3, m4, m5, m6);
}
