#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.size();
    int nuc = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            ++nuc;
        }
    }

    if (len == nuc) {
        for (int i = 0; str[i] != '\0'; ++i) {
            str[i] = str[i] + 32;
        }
        cout << str << "\n";
    } else if ((str[0] >= 'a' && str[0] <= 'z') && (nuc == len - 1)) {
        str[0] = str[0] - 32;
        for (int i = 1; str[i] != '\0'; ++i) {
            str[i] = str[i] + 32;
        }
        cout<< str << "\n";
    } else {
        cout << str << "\n";
    }

    return 0;
}
