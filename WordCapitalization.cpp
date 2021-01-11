#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "bangladesh";
    cin >> s;
    
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 32;
    }

    cout << s << endl;

    return 0;
}
