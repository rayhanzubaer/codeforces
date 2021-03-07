#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	string str;
	int count = 0;

	for (int i = 0; i < n; ++i) {
		cin >> str;

		if (str == "Tetrahedron") {
			count += 4;
		} else if (str == "Cube") {
			count += 6;
		} else if (str == "Octahedron") {
			count += 8;
		} else if (str == "Dodecahedron") {
			count += 12;
		} else {
			count += 20; // Icosahedron
		}
	}

	cout << count << "\n";

	return 0;
}
