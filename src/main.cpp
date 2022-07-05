#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string x;
	getline(cin, x);

	auto c = int{ 1 };
	while ("0" != x) {
		cout << "Case " << c << ": Sorting... done!\n";

		getline(cin, x);
		++c;
	}

	return 0;
}