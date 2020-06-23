
constexpr auto fib(int n) -> long long
{
	return n < 0 ? throw std::exception("Cannot evaluate negative fib")
		: n < 2 ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
	constexpr auto val = fib(12);
}
