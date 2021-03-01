#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	long long int a, b;

	while (t--) {
		cin >> a >> b;

		int r = a % b;

		if (r == 0) {
			cout << 0 << "\n";
		} else {
			cout << (b - r) << "\n";
		}
	}

	return 0;
}
