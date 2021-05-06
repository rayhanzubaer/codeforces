#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char turn = 'A';
    int nip = n * m;

    while (nip > 0) {
        n--;
        m--;
        if (turn == 'A') {
            turn = 'M';
        } else {
            turn = 'A';
        }
        nip = n * m;
    }

    if (turn == 'A') {
        cout << "Malvika\n";
    } else {
        cout << "Akshat\n";
    }

    return 0;
}
