#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool flag = false;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') {
            i += 2;
            if (flag) {
                cout << " ";
            }
        } else {
            cout << str[i];
            flag = true;
        }
    }

    return 0;
}
