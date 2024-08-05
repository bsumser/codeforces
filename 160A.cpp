#include <bits/stdc++.h>
#include <fstream>
#include <bitset>


using namespace std;

int main() {
    int n, c;
    int need = 0;
    int purse = 0;
    vector<int> coins;
    cin >> n;

    while(cin >> c) {
        coins.push_back(c);
    }

    sort(coins.begin(), coins.end());

    int sum = accumulate(coins.begin(), coins.end(), 0);

    while(coins.size() > 0) {
        int cur_coin = coins.back();
        purse += cur_coin;
        sum -= cur_coin; 
        need += 1;
        coins.pop_back();

        if (sum < purse) {
            cout << need << '\n';
            return 0;
        }
    }

    return 0;
}