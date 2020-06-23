
constexpr auto exp(int base, int power) -> long long
{
	return power == 0 ? 1
		: power % 2 == 0 ? exp(base * base, power / 2)
		: base * exp(base * base, power / 2);
}

int main()
{
	constexpr auto pow = exp(10, 5);
}
