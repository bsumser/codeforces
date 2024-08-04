#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
    string x, y;

    cin >> x;
    cin >> y;
    //x = "bwuEhEveouaTECagLZiqmUdxEmhRSOzMauJRWLQMppZOumxhAmwuGeDIkvkBLvMXwUoFmpAfDprBcFtEwOULcZWRQhcTbTbX";
    //y = "HhoDWbcxwiMnCNexOsKsujLiSGcLllXOkRSbnOzThAjnnliLYFFmsYkOfpTxRNEfBsoUHfoLTiqAINRPxWRqrTJhgfkKcDOH";

    for (int i = 0; i < x.length(); i++) {
        x[i] = tolower(x[i]);
        y[i] = tolower(y[i]);
    }

    if (x.compare(y) == 0)
        cout << 0 << '\n';
    else if (x.compare(y) < 0)
        cout << -1 << '\n';
    else if (x.compare(y) > 0)
        cout << 1 << '\n';
    
    return 0;
}