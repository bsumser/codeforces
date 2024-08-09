#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main() {
    string x;
    cin >> x;

    stack<char> hello;
    hello.push('o');
    hello.push('l');
    hello.push('l');
    hello.push('e');
    hello.push('h');

    for (int i = 0; i < x.length(); i++) {
        if (hello.empty())
            break;
        if (x[i] == hello.top()) {
            hello.pop();
        }
    }

    cout << ((hello.empty()) ? "YES" : "NO") << endl;

    return 0;
}