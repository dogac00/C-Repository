
#include <ctype.h>
#include <stdio.h>

double str_to_double(const char str[]);

int main()
{
	printf("%f", str_to_double("123.123"));
	
	return 0;
}

double str_to_double(const char str[])
{
	int i = 0;
	int sign;
	double result, power;
	
	while (isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[i] == '+')
	{
		i++;
		sign = 1;
	}
	else
		sign = str[i] > 0 ? 1 : -1;

	for (result = 0; str[i] != '.'; i++)
		result = result * 10 + (str[i] - '0');
	i++;
	for (power = 1; str[i] != '\0'; i++)
	{
		result = result * 10 + (str[i] - '0');
		power *= 10;
	}

	return sign * result / power;
}
