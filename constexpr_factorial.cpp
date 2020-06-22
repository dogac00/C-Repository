
using namespace std;

constexpr auto factorial(int n) -> long long
{
	return n < 2 ? 1 : n * factorial(n - 1);
}

int main()
{
	constexpr auto x = factorial(20);

	std::cout << "The value of x is calculated at compile time here." << '\n';
}
