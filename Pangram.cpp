#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	string str;
	cin >> str;

	bool a[26];

	for (int i = 0; i < 26; ++i) a[i] = false;

	int idx;

	for (int i = 0; i < n; ++i) {
		idx = -1;
		if (str[i] >= 'A' && str[i] <= 'Z') {
			idx = str[i] - 'A';
			a[idx] = true;
		} else {
			idx = str[i] - 'a';
			a[idx] = true;
		}
	}

	bool flag = true;

	for (int i = 0; i < 26; ++i) {
		if (a[i] == false) {
			flag = false;
			break;
		}
	}

	cout << (flag ? "YES" : "NO") << "\n";

	return 0;
}
