#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin, str);

	bool a[26];

	for (int i = 0; i < 26; ++i) a[i] = false;

	int num_count = 0;
	int i = 0;
	
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z') {
			int idx = str[i] - 97;
			if (a[idx] == false) {
				++num_count;
				a[idx] = true;
			} 
		}
		++i;
	}
	
	cout << num_count << "\n";

	return 0;
}
