#include <iostream>
using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;

    int len = n1.size();

    for (int i = 0; i < len; ++i) {
        cout << (n1[i] == n2[i] ? '0' : '1');
    }

    return 0;
}
