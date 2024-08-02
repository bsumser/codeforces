#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;

    cin >> tc;

    while (tc--) {
        string f;

        cin >> f;

        if (f.length() <= 10) {
            cout << f << "\n";
            continue;
        }

        string n = f[0] + to_string((int) f.length() - 2) + f.back();
        cout << n << "\n";
    }
    return 0;
}