#include <bits/stdc++.h>

using namespace std;

int main() {

    int tc;
    cin >> tc;

    while (tc--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        vector<int> a = {a1, a2};
        vector<int> b = {b1, b2};
        int suneetWins = 0;

        // Check all possible round outcomes
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int suneetRoundWins = 0, slavicRoundWins = 0;

                if (a[i] > b[j]) suneetRoundWins++;
                else if (a[i] < b[j]) slavicRoundWins++;

                if (a[1-i] > b[1-j]) suneetRoundWins++;
                else if (a[1-i] < b[1-j]) slavicRoundWins++;

                if (suneetRoundWins > slavicRoundWins) suneetWins++;
            }
        }

        cout << suneetWins << endl;
    }
    return 0;
}