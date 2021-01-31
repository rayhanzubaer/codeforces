#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (true) {
        ++n;
        int tmp = n;
        int a = tmp % 10;
        tmp /= 10;
        int b = tmp % 10;
        tmp /= 10;
        int c = tmp % 10;
        tmp /= 10;
        int d = tmp % 10;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
            cout << n << endl;
            break;
        }
    }
    return 0;
}
