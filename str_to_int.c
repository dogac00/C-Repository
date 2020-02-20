
#include <ctype.h>
#include <stdio.h>

int str_to_int(char str[]);

int main()
{
	printf("%d", str_to_int("24"));
	printf("%d", str_to_int("-12"));
	printf("%d", str_to_int("+345"));
	
	return 0;
}

int str_to_int(char str[])
{
	int i = 0;
	int sign, result;
	
	while (isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	else if (isdigit(str[i]))
		sign = str[i] > 0 ? 1 : -1;
	else
		return -1;
	
	for (result = 0; isdigit(str[i]); i++)
		result = result * 10 + (str[i] - '0');

	return sign * result;
}
