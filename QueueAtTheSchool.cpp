#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    for (int x = 1; x <= t; ++x) {
        for (int i = 0; i < n - 1; ++i) {
            if (str[i] == 'B' && str[i + 1] == 'G') {
                str[i] = 'G';
                str[i+1] = 'B';
                i++;
            }
        }
    }

    cout << str << endl;

    return 0;
}