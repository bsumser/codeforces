#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string input;
    int a = 0; 
    int d = 0;
    cin >> n >> input;

    for (int i = 0; i < n; i++) {
        if (input[i] == 'A')
            a += 1;
        else if (input[i] == 'D')
            d += 1;
    }

    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else if (d == a)
        cout << "Friendship" << endl;
    return 0;
}