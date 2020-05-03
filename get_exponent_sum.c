
#include <math.h>
#include <stdio.h>

double get_result(double p, double exponent)
{
	double total = 0;

	for (int i = 1; i < 11; ++i)
	{
		double value = pow(p, exponent);

		if (i % 2 == 1)
			total += value;
		else
			total -= value;
	}

	return total;
}

int main()
{
	double val = get_result();

	printf("%f", val);
}
