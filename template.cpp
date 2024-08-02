#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;

    cin >> tc;

    while (tc--) {
        string f, s;

        cin >> f >> s;

        swap(f[0], s[0]);

        cout << f << " " << s << "\n";
    }
    return 0;
}