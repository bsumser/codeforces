#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    int ans = 0;

    cin >> tc;

    while (tc--) {
        string x;

        cin >> x;

        if (x[1] == '+') {
            ans += 1;
        }
        else {
            ans -= 1;
        }
    }
    cout << ans << "\n";
    return 0;
}