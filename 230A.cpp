#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    bool flag = true;
    vector<pair<int, int> > dragons;

    while(n--) {
        int x, y;
        cin >> x >> y;

        dragons.push_back({x, y});

    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < dragons.size(); i++) { 

        if (s > dragons[i].first) {
            s += dragons[i].second;
        }
        else {
            flag = false;
            break;
        }

        //s > x ? s += y : flag = false; 
    }

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}