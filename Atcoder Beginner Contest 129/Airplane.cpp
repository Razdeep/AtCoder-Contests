// https://atcoder.jp/contests/abc129/tasks/abc129_a
#include <bits/stdc++.h>
#define debugi(x) cerr << "x -> " << x << endl;
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define _                             \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ONLINE_JUDGE

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int i;
    vector<int> flight_times(3, INT_MAX);
    For(i, 3)
    {
        cin >> flight_times[i];
    }
    sort(all(flight_times));
    cout << flight_times[0] + flight_times[1] << endl;
}
int main()
{
    _;
    ull testcases = 1LL;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}