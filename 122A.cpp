#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;

    vector<int> lucky;
    set<char> vals = {'4', '7'};
    
    for (int i = 0; i <= x; i++) {
        string cur = to_string(i);
        set<char> check(cur.begin(), cur.end());
        if (check == vals || i == 4 || i == 7) {
            //cout << i << endl;
            lucky.push_back(i);
        }
    
    }

    for (int j = 0; j < lucky.size(); j++) {
        if (x % lucky[j] == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}