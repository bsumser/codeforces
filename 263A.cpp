#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
    int row, col, n;
    int ans = 0;
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> n;
            if (n == 1) {
                row = i + 1;
                col = j + 1;
            }
    
        }
    
    }

    if (row > 3) {
        ans += row - 3;
    }
    else if (row < 3){
        ans += 3 - row;
    }
    
    if (col > 3) {
        ans += col - 3;
    }
    else if (col < 3){
        ans += 3 - col;
    }
    
    cout << ans << endl;
    return 0;
}