
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

string find_missing(const string& str)
{
	constexpr auto alphabet = 26;

	bool mark[alphabet] = { false };

	string lower{ str };
	
	transform(str.begin(), str.end(), lower.begin(), tolower);

	for (auto ch : lower)
		if (isalpha(ch))
			mark[ch - 'a'] = true;

	string missing;

	for (auto i = 0; i < alphabet; i++)
		if (!mark[i])
			missing.push_back('a' + i);

	return missing;
}

int main()
{
	auto missing = find_missing("The quick brown fox jumps "
					"over the dog");

	cout << missing << endl;
}
