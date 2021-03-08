#include <iostream>
using namespace std;

int main() {
	string a, b, c;
	cin >> a >> b >> c;

	int lenA = a.size();
	int lenB = b.size();
	int lenC = c.size();


	if (lenA + lenB != lenC) {
		cout << "NO" << endl;
	} else {
		bool isSame = true;

		for (int i = 0; i < lenA; ++i) {
			for (int j = 0; j < lenC; ++j) {
				if (a[i] == c[j]) {
					c[j] = '-';
					break;
				}
			}
		}

		for (int i = 0; i < lenB; ++i) {
			for (int j = 0; j < lenC; ++j) {
				if (b[i] == c[j]) {
					c[j] = '-';
					break;
				}
			}
		}

		for (int i = 0; i < lenC; ++i) {
			if (c[i] != '-') {
				isSame = false;
			}
		}

		cout << (isSame ? "YES" : "NO") << endl;
	}

	return 0;
}
