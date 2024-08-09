#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    int xf, yf, zf;
    xf = yf = zf = 0;

    while(tc--) {
        int x, y, z;
        cin >> x >> y >> z;
        xf += x;
        yf += y;
        zf += y;
    }

    cout << ((xf == 0 && yf == 0 && zf == 0) ? "YES" : "NO") << endl;

    return 0;
}