#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;

    if (islower((n[0]))) {
        n[0] = (char)((int)n[0] - 32);
    }

    cout << n << endl;


    return 0;
}