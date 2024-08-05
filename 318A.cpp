#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
    string a;

    cin >> a;

    set<char> sset(a.begin(), a.end());

    if (sset.find('H') != sset.end()) {
        cout << "YES";
        return 0;
    }
    else if (sset.find('Q') != sset.end()) {
        cout << "YES";
        return 0;
    }
    else if (sset.find('9') != sset.end()) {
        cout << "YES";
        return 0;
    }


    cout << "NO";
    return 0;
}