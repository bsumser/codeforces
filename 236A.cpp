#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    cin >> x;

    set<char> ms (begin(x), end(x));

    cout << ((ms.size()) % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
    return 0;
}