#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
    int n, k, a;
    int ans = 0;
    vector<int> input;

    cin >> n >> k;

    for (int i = 0; i < k; ++i) {
        cin >> a;

        if (a == 0) {
            cout << i << endl;
            return 0;
        }
    }

    int b; 
    for (int i = 0; i < n; ++i) {
        cin >> b;

        if (b != a) {
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}