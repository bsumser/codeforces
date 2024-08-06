#include <bits/stdc++.h>
#include <regex>
#include <string>

using namespace std;

int main() {
    string x;
    int flag = 1;

    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] == 'W' && x[i+1] == 'U' && x[i+2] == 'B') {
            i += 2;
            if (!flag) {
                cout << " ";
            }
            continue;
        }
        else {
            flag = 0;
            cout << x[i];
        }
    }
    return 0;
}