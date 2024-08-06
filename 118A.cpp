#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    string v = "aeiouyAEIOUY";
    string c = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    
    set<char> vowels(begin(v), end(v));
    set<char> cons(begin(c), end(c));

    cin >> x;

    for (int i = x.length() - 1; i >= 0; i--) {
        int cur = (int)x[i];
        if (vowels.count(x[i]) == 1) {
            //cout << x[i] << " " << vowels.count(x[i]) << "\n";
            x.erase(i, 1);
        }
        if (cons.count(x[i]) > 0) {
            if (cur > 64 && cur < 91) {
                //cout << "upper" << '\n';
                x[i] = char(int(x[i]) + 32);
            }
            x.insert(i, ".");
        }

    }

    cout << x << "\n";
    return 0;
}