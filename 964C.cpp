#include <bits/stdc++.h>

using namespace std;

int main() {

    int tc;
    cin >> tc;

    while(tc--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int,int> > intervals;
        for(int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;

            intervals.push_back({l, r});
        }

        intervals.push_back({0,0});
        intervals.push_back({m,m});
        sort(intervals.begin(), intervals.end());
        
        bool showerflag = false;

        //for (auto it: intervals) {
        //    cout << "interval-" << it.start  << " " << it.end << endl;
        //}
        //cout << "end day" << endl;

        for (int i = 1; i < intervals.size(); i++) {
            showerflag |= (intervals[i-1].second + s <= intervals[i].first);
        }

        cout << (showerflag? "YES" : "NO") << endl;

    }    
    return 0;
}