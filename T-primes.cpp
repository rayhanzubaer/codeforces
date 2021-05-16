#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    long long int limit = sqrt(n);
    for (long long int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    long long int t;
    cin >> t;
    long long int n, a;
    while (t--) {
        cin >> n;
        if (n == 1) {
            cout << "NO" << "\n";
            continue;
        }
        a = sqrt(n);
        if ((a * a == n) && (isPrime(a))) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
