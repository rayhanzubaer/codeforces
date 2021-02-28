#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int odd_count = 0, even_count = 0;

	for (int i = 0; i < n; ++i) {
		if (a[i] % 2 == 0) {
			++even_count;
		} else {
			++odd_count;
		}
	}

	if (odd_count < even_count) {
		for (int i = 0; i < n; ++i) {
			if (a[i] % 2 == 1) {
				cout << (i + 1) << "\n";
				break;
			}
		}
	} else {
		for (int i = 0; i < n; ++i) {
			if (a[i] % 2 == 0) {
				cout << (i + 1) << "\n";
				break;
			}
		}
	}

	return 0;
}
