#include <iostream>
#include <string>
using namespace std;

string r = "";

void push(char c) {
    if (r == "") {
        r += c;
    } else {
        bool flag = false;
        for (int i = 0; i < r.size(); ++i) {
            if (c == r[i]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            r += c;
        }
    }
}

int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != '\0') {
        push(s[i]);
        ++i;
    }
    if (r.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
