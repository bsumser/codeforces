#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a;

    cin >> n >> m >> a;

    int l = (n > m) ? n : m;
    int b = (n < m) ? n : m;

    long long ans = (ceil(l / (double)a) * ceil(b / (double)a));

    cout << ans << "\n";

    return 0;
}