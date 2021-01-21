#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

string toUpperCase(string str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

int main() {
    string str;
    cin >> str;

    int i = 0;
    int uc = 0;
    int lc = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            uc++;
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            lc++;
        }
        ++i;
    }

    if (lc > uc) {
        cout << toLowerCase(str) << endl;
    } else if (lc < uc) {
        cout << toUpperCase(str) << endl;
    } else {
        cout << toLowerCase(str) << endl;
    }

    return 0;
}
