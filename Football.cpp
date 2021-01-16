#include <iostream>
using namespace std;

int main() {
    string s = "001001";
    cin >> s;

    int i = 0;
    int o = 0;
    int z = 0;

    while (s[i] != '\0') {
        if (s[i] == '1') {
            ++o;
            z = 0;
        } else {
            ++z;
            o = 0;
        }
        if (o >= 7 || z >= 7) {
            break;
        }
        ++i;
    }

    if (o >= 7 || z >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
