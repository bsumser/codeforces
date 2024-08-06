#include <bits/stdc++.h>

using namespace std;

int main() {

    int tc;
    cin >> tc;
    int sum = 0;

    while(tc--) {
        string cur;
        cin >> cur;

        char one = cur[0];
        char two = cur[1];
        
        cout << (int)one - 48 + (int)two - 48 << endl;
    }
    
    return 0;
}