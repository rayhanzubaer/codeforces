#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	long long int n;

	while (t--) {
		cin >> n;

		if (n == 1) {
			cout << 0 << "\n";
		} else {
			int res = n / 2;
			if (n % 2 == 0) {
				cout << res - 1 << "\n";
			} else {
				cout << res << "\n";
			}
		}
	}	

	return 0;
}
