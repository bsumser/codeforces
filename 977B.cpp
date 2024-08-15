#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    if (s.length() == 2) {
        cout << s << endl;
        return 0;
    }

    map<string, int> mp;

    for (int i = 0; i < n-1; i++) {
        string cur = s.substr(i,2);
        mp.find(cur) == mp.end() ? mp[cur] = 1 : mp[cur] += 1; 
    }

    pair<string, int> maxVal = make_pair("NULL", 0);
    for (auto &key : mp) {
        if (key.second > maxVal.second) {
            maxVal.first = key.first;
            maxVal.second = key.second;
        }
        //cout << key.first  << " " << key.second << endl;
    }

    cout << maxVal.first << endl;

    return 0;
}