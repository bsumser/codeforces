#include <bits/stdc++.h>
#include <fstream>
#include <bitset>


using namespace std;

int main() {
    //string t = "10000000";
    string t;
    cin >> t;

    if (t.length() < 7) {
        cout << "NO" << '\n';
        return 0;
    }

    int ans = 0;

    for (int i = 7; i <= t.length(); ++i) {
        bitset<7> cur = bitset<7>(t.substr(i-7, i).c_str());
        
        //cout << cur << '\n';

        if (cur.count() == 7 || cur.count() == 0) {
            cout << "YES" << '\n';
            return 0;
        }
    }

    cout << "NO" << '\n';
    return 0;
}