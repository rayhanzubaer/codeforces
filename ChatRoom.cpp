#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt = 0;

    int x = 0;

    for (int i = x; str[i] != '\0'; ++i) {
        if (str[i] == 'h') {
            x = i;
            cnt++;
            break;
        }
    }

    for (int i = x+1; str[i] != '\0'; ++i) {
        if (str[i] == 'e') {
            x = i;
            cnt++;
            break;
        }
    }

    for (int i = x+1; str[i] != '\0'; ++i) {
        if (str[i] == 'l') {
            x = i;
            cnt++;
            break;
        }
    }

    for (int i = x+1; str[i] != '\0'; ++i) {
        if (str[i] == 'l') {
            x = i;
            cnt++;
            break;
        }
    }

    for (int i = x+1; str[i] != '\0'; ++i) {
        if (str[i] == 'o') {
            x = i;
            cnt++;
            break;
        }
    }

    if (cnt == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
