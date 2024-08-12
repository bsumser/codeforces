#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    string first;
    string second;
    cin >> first;
    tc--;

    int first_score = 1;
    int second_score = 0;

    while(tc--) {
        string cur;
        cin >> cur;

        if (cur != first) {
            second = cur;
        }
        
        cur == first ? first_score += 1 : second_score += 1;
    }

    cout << (first_score > second_score ? first : second) << endl;


    return 0;
}