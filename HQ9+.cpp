#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    bool flag = false;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            flag = true;
            break;
        }
        ++i;
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
