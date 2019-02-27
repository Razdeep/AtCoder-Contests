// https://atcoder.jp/contests/abc119/tasks/abc119_b
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    double total_worth = 0;
    ll no_of_gifts;
    cin >> no_of_gifts;
    while (no_of_gifts--)
    {
        double amount;
        string currency;
        cin >> amount >> currency;
        if (currency == "BTC")
        {
            total_worth += (amount * 380000.0);
        }
        else
        {
            total_worth += amount;
        }
    }
    cout << total_worth << endl;
    return 0;
}